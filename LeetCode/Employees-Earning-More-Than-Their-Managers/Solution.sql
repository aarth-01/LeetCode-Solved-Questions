1# Write your MySQL query statement below
2select e.name as Employee
3from Employee e  JOIN Employee m
4where e.managerId= m.id AND e.salary>m.salary;
5