# Write your MySQL query statement below
SELECT DISTINCT w2.id
FROM Weather w1 
JOIN Weather w2 ON DATEDIFF(w2.recordDate, w1.recordDate) = 1
WHERE w1.recordDate < w2.recordDate 
AND w2.temperature > w1.temperature
