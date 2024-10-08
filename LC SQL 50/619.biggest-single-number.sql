# Write your MySQL query statement below
-- SELECT
--     COALESCE(
--         (SELECT num 
--             FROM MyNumbers
--             GROUP BY num
--             HAVING COUNT(num) = 1
--             ORDER BY num DESC
--             LIMIT 1
--         ), NULL
--     ) AS num;

SELECT MAX(num) as num
FROM (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) AS unique_num;