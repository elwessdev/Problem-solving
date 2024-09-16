# Write your MySQL query statement below
SELECT
    customer_id
FROM Customer, (SELECT COUNT(product_key) FROM Product) as P
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = P;