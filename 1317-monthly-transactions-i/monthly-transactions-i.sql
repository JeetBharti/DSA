# Write your MySQL query statement below
SELECT 
    CASE
        WHEN MONTH(trans_date)>9 THEN CONCAT(YEAR(trans_date),"-",MONTH(trans_date))
        ELSE CONCAT(YEAR(trans_date),"-0",MONTH(trans_date))
    END as month, 
    country,
    COUNT(id) AS trans_count,
    COUNT(IF(state='approved',1,NULL)) AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(IF(state='approved',amount,0)) AS approved_total_amount
FROM Transactions
GROUP BY YEAR(trans_date), MONTH(trans_date), country