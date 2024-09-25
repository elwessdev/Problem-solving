# Write your MySQL query statement below
SELECT person_name
FROM (select person_name, weight, turn, sum(weight) over(order by turn) as cum_sum from queue) as t2
WHERE cum_sum <= 1000
ORDER BY turn DESC
LIMIT 1;