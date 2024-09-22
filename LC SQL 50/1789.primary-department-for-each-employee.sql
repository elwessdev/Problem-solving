# Write your MySQL query statement below
-- 1
-- WITH DepCount as (
--     Select employee_id, COUNT(department_id) as dep_count
--     FROM Employee
--     GROUP BY employee_id
-- )
-- SELECT E.employee_id, E.department_id
-- FROM Employee as E
-- JOIN DepCount as D ON D.employee_id = E.employee_id
-- WHERE D.dep_count = 1 OR (D.dep_count > 1 AND E.primary_flag = 'Y');
-- 2
SELECT employee_id, department_id
FROM Employee
WHERE primary_flag = 'Y'
UNION
SELECT employee_id, department_id
FROM Employee
GROUP BY employee_id
HAVING COUNT(employee_id) = 1;