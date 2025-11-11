no 1
select a.vend_name, b.prod_price
from vendors a join products b on a.vend_id=b.vend_id
where prod_price = (select min(prod_price) from products);

no 2
select a.vend_city, b.prod_name, b.prod_price
from vendors a join products b on a.vend_id=b.vend_id
where prod_name like '%JetPack%' and prod_price<'55';

no 3
select a.cust_name, b.order_date
from customers a join orders b on a.cust_id=b.cust_id
where order_date = ('2005-09-01');

no 4
SELECT c.cust_city, c.cust_country, c.cust_zip
FROM orders AS o1
JOIN orderitems AS oi1 ON o1.order_num = oi1.order_num
JOIN orderitems AS oi2 ON oi1.prod_id = oi2.prod_id
JOIN orders AS o2 ON oi2.order_num = o2.order_num
JOIN customers AS c ON o2.cust_id = c.cust_id
WHERE o1.cust_id = 10002 AND o2.cust_id != 10002;

no 5
select c.cust_name, oi.order_item
from orders o join orderitems oi on o.order_num=oi.order_num
join customers c on c.cust_id=o.cust_id
where order_item = (select max(order_item) from orderitems);


select c.cust_city, c.cust_country, c.cust_zip
from orders o1 join orderitems oi1 on o1.order_num=oi1.order_num
join orderitems oi2 on oi2.prod_id=oi1.prod_id
join orders o2 on oi2.order_num=o2.order_num
join customers c on o2.cust_id=c.cust_id
where o1.cust_id=10002 and o2.cust_id!=10002;