# Write your MySQL query statement below
SELECT
    E1.employee_id,
    E1.name,
    COUNT(E2.reports_to) AS reports_count,
    ROUND(AVG(E2.age)) AS average_age
FROM Employees AS E1
JOIN Employees AS E2 ON E2.reports_to = E1.employee_id
GROUP BY E1.employee_id
ORDER BY E1.employee_id;