SELECT 
    ROUND(AVG(diff)*100,2) as immediate_percentage
FROM 
    (
        SELECT
            CASE WHEN MIN(customer_pref_delivery_date)=MIN(order_date) > 0 THEN 1 ELSE 0 END as diff
        FROM Delivery
        GROUP BY customer_id
    ) as subTab;