# Write your MySQL query statement below
select distinct a.email as Email from
Person as a join 
Person as b
on a.id != b.id and a.email=b.email;