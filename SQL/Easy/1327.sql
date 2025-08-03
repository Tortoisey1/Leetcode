# Write your MySQL query statement below
select product_name, sum(unit) as unit 
from Products as p
join Orders as o
on p.product_id = o.product_id
where Year(order_date) = 2020 and month(order_date) = 2
group by product_name
having sum(unit) >=100;