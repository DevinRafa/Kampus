-- TRIGGER
create table orderitems_hapus as select * from orderitems where 1=2;

alter table orderitems_hapus
add tgl_dihapus DATETIME,
add user VARCHAR(255);

delimiter $$
create trigger hapus_barang after delete on orderitems for each row
begin
insert into orderitems_hapus
(order_num, order_item, prod_id, quantity, tgl_dihapus, user)
values(
old.order_num,
old.order_item,
old.prod_id,
old.quantity,
SYSDATE(),
CURRENT_USER);
end $$


delimiter ;
-- delimiter $$


delete from orderitems where prod_id=('TNT2');
select * from orderitems;
select * from orderitems_hapus;


-- VIEW
create view vendnegara as select vend_name, vend_country from vendors;
select * from vendnegara;


-- LEFT JOIN
select p.prod_name, pn.note_date
from products p left join productnotes pn on p.prod_id=pn.prod_id;


-- RIGHT JOIN
select p.prod_name, pn.note_date
from products p right join productnotes pn on p.prod_id=pn.prod_id;


-- SELF JOIN
select pn1.prod_id, 'terbayar pada', pn2.note_date
from productnotes pn1 inner join productnotes pn2 on pn1.note_id=pn2.note_id;


-- join 2 table clause where
select c.cust_name, oi.order_item
from orders o join orderitems oi on o.order_num=oi.order_num
join customers c on c.cust_id=o.cust_id
where order_item = (select max(order_item) from orderitems);

-- join on 3 table
select v.vend_name, p.prod_name, pn.note_text
from vendors v join products p on v.vend_id=p.vend_id
join productnotes pn on pn.prod_id=p.prod_id;