# Write your MySQL query statement below
select u.name as name, sum(t.amount) as balance
from Users as u
join  Transactions as t
on u.account = t.account
Group by u.account
Having sum(t.amount)>10000