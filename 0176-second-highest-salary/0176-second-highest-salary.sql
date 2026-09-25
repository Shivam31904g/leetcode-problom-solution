# Write your MySQL query statement below
select(select * from (select distinct salary from Employee
Order by salary desc) as s
limit 1 offset 1) as SecondHighestSalary;
