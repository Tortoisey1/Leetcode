# Write your MySQL query statement below
update Salary
set sex= CASE sex
when 'm' then 'f'
when 'f' then 'm'
else sex
end;

