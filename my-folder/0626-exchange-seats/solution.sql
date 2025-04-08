# Write your MySQL query statement below
SELECT
    CASE 
        WHEN id%2 = 1 AND id+1 IN(Select ID FROM Seat) THEN id+1
        WHEN id%2 = 0 THEN id-1
        ELSE id
    END as id,student
From Seat
Order By id;
