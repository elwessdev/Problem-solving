# Write your MySQL query statement below
-- SELECT
--     ROUND(SUM(I1.tiv_2016),2) as tiv_2016
-- FROM Insurance as I1
-- WHERE 
--     (tiv_2015) IN (
--         SELECT tiv_2015 FROM Insurance as I2
--         WHERE I1.pid != I2.pid
--     )
--     AND
--     (lat,lon) NOT IN (
--         SELECT lat,lon FROM Insurance as I3
--         WHERE I1.pid != I3.pid
--     );
SELECT
    ROUND(SUM(I1.tiv_2016), 2) AS tiv_2016
FROM Insurance AS I1
WHERE 
    EXISTS (
        SELECT 1
        FROM Insurance AS I2
        WHERE I1.tiv_2015 = I2.tiv_2015 && I1.pid != I2.pid
    )
    AND 
    NOT EXISTS (
        SELECT 1
        FROM Insurance AS I3
        WHERE I1.lat = I3.lat && I1.lon = I3.lon && I1.pid != I3.pid
    );