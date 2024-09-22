SELECT 
    DISTINCT l1.num as ConsecutiveNums
FROM Logs as l1
LEFT JOIN Logs as l2 ON l2.id = l1.id + 1
LEFT JOIN Logs as l3 ON l3.id = l1.id + 2
WHERE l1.num = l2.num AND l1.num = l3.num AND l3.num = l2.num;
