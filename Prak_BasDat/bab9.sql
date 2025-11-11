-- nomor 1
CREATE USER 'devin'@'localhost' IDENTIFIED BY 'Panas321';

Buat lihat user saat ini: 
select user();

mysql -u namauser -p
Masukkin pw


-- nomor 2
GRANT INSERT ON order_entry.vendors TO 'devin'@'localhost';
FLUSH PRIVILEGES;

GRANT SELECT ON order_entry.vendors TO 'devin'@'localhost';
FLUSH PRIVILEGES;


SHOW GRANTS FOR 'devin'@'localhost';


-- nomor 3
INSERT INTO vendors (vend_id, vend_name, vend_address, vend_city, vend_state, vend_zip, vend_country) VALUES
('1007', 'Devin Rafa H', '212 fly street', 'Purwokerto', 'JT', '5321', 'Indonesia');

UPDATE vendors
SET vend_country = 'UK',
WHERE vend_id = '1003';

DELETE FROM vendors WHERE vend_id = '1003';



-- nomor 4
revoke select on order_entry.vendors from devin@localhost;
FLUSH PRIVILEGES;

revoke insert on order_entry.vendors from devin@localhost;
FLUSH PRIVILEGES;