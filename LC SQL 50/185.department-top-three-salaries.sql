# Write your MySQL query statement below
WITH EmpRank as (
    SELECT
        name, salary,
        DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS ind,
        departmentId
    FROM Employee
)
SELECT
    D.name as Department , E.name as Employee, E.salary as Salary
FROM EmpRank as E
JOIN Department as D ON D.id = E.departmentId
WHERE E.ind <= 3;