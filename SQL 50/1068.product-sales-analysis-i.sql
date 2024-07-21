# Write your MySQL query statement below
SELECT P.product_name, S.year, S.price FROM Product AS P
JOIN Sales AS S WHERE P.product_id=S.product_id;