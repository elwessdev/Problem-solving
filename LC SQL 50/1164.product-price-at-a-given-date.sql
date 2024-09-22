# Write your MySQL query statement below
WITH maxDate AS (
    SELECT
        product_id,
        MAX(change_date) AS date
    FROM Products
    WHERE DATEDIFF(change_date, '2019-08-16') <= 0
    GROUP BY product_id
)
SELECT
    DISTINCT P.product_id,
    CASE WHEN D.date IS NOT NULL THEN P.new_price ELSE 10 END AS price
FROM Products AS P
LEFT JOIN maxDate AS D ON D.product_id = P.product_id
WHERE P.change_date = D.date OR D.date IS NULL
ORDER BY product_id;

-- SELECT
--     product_id,
--     new_price as price
-- FROM Products
-- WHERE (product_id,change_date) IN (
--         SELECT
--             product_id,
--             MAX(change_date) AS date
--         FROM Products
--         WHERE DATEDIFF(change_date, '2019-08-16') <= 0
--         GROUP BY product_id)
-- UNION
-- SELECT
--     product_id,
--     10 as price
-- FROM Products
-- WHERE product_id NOT IN (
--         SELECT
--             DISTINCT product_id
--         FROM Products
--         WHERE DATEDIFF(change_date, '2019-08-16') <= 0
--     );