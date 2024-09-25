# Write your MySQL query statement below
SELECT 'High Salary' AS category, COUNT(account_id) AS accounts_count 
FROM Accounts 
WHERE income > 50000
UNION ALL
SELECT 'Low Salary' AS category, COUNT(account_id) AS accounts_count 
FROM Accounts 
WHERE income < 20000
UNION ALL
SELECT 'Average Salary' AS category, COUNT(account_id) AS accounts_count 
FROM Accounts 
WHERE income >= 20000 AND income <= 50000;

-- SELECT 'High Salary' AS category, SUM(income > 50000) AS accounts_count FROM Accounts 
-- UNION
-- SELECT 'Low Salary' AS category, SUM(income < 20000) AS accounts_count FROM Accounts 
-- UNION
-- SELECT 'Average Salary' AS category, SUM(income >= 20000 AND income <= 50000) AS accounts_count FROM Accounts 