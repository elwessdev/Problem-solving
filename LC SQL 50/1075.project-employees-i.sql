# Write your MySQL query statement below
SELECT
    P.project_id,
    ROUND(AVG(E.experience_years),2) as average_years
FROM Project AS P
JOIN Employee AS E
ON E.employee_id = P.employee_id
GROUP BY P.project_id;