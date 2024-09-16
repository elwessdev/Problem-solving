WITH FirstLogin AS (
    SELECT player_id, MIN(event_date) AS first_login
    FROM Activity
    GROUP BY player_id
),
NextLogin AS (
    SELECT a1.player_id, MIN(a1.event_date) AS next_login
    FROM Activity AS a1
    JOIN FirstLogin AS FL ON a1.player_id = fl.player_id
    WHERE a1.event_date > FL.first_login AND DATEDIFF(a1.event_date,FL.first_login) = 1
    GROUP BY a1.player_id
)
SELECT
    ROUND(COUNT(FL.first_login)/(SELECT COUNT(DISTINCT player_id) FROM Activity),2) as fraction
FROM FirstLogin AS FL
JOIN NextLogin AS NL ON NL.player_id = FL.player_id;