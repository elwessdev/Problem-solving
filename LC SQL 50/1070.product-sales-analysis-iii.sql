# Write your MySQL query statement below
-- SELECT
--     S.product_id,
--     S.year as first_year,
--     S.quantity,
--     S.price
-- FROM Sales AS S
-- JOIN (
--     SELECT product_id, MIN(year) AS first_year
--     FROM Sales
--     GROUP BY product_id
-- ) AS F 
-- ON S.product_id = F.product_id
-- AND S.year = F.first_year;

SELECT
    S.product_id,
    S.year as first_year,
    S.quantity,
    S.price
FROM Sales AS S
WHERE (product_id, year) IN (
    SELECT product_id, MIN(year) AS year
    FROM Sales
    GROUP BY product_id
);