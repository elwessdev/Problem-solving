# Write your MySQL query statement below
SELECT
    r.contest_id,
    ROUND(
        (COUNT(u.user_id)/(SELECT COUNT(user_id) FROM Users))*100
        ,2
    ) as percentage
FROM Users AS u
JOIN Register as r
    ON r.user_id = u.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC;