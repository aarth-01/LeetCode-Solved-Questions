1# Write your MySQL query statement below
2select firstName, lastName, city, state
3from person 
4left join address using(personId)
5order by personId;
6