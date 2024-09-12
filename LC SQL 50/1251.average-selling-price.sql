# Write your MySQL query statement below
-- select 
--     p.product_id,
--     CASE 
--         WHEN u.purchase_date is not null 
--         THEN ROUND(SUM(p.price * u.units) / SUM(u.units), 2) 
--         ELSE 0 END as average_price
-- from prices as p
-- left join UnitsSold as u
-- on p.product_id=u.product_id
-- where 
--     case when u.purchase_date is not null
--         then u.purchase_date BETWEEN p.start_date AND p.end_date
--         else true
--     END
-- group by p.product_id;

select 
    p.product_id,
    IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units), 2),0) as average_price
from prices as p
left join UnitsSold as u
on p.product_id=u.product_id AND u.purchase_date BETWEEN p.start_date AND p.end_date
group by p.product_id;