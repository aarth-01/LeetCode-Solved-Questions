1# Write your MySQL query statement below
2SELECT class
3FROM Courses
4GROUP BY class
5HAVING COUNT(class)>=5;
6
7