# Write your MySQL query statement below
SELECT 
    -- CONCAT(YEAR(trans_date),'-',LPAD(MONTH(trans_date),2,'0')) AS month,
    LEFT(trans_date,7) as month,
    country,
    COUNT(trans_date) AS trans_count,
    SUM(state='approved') AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(CASE WHEN state='approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM Transactions
GROUP BY month,country;