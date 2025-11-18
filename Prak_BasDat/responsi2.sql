soal
https://bit.ly/SOAL-Paket-PETSHOP

form
https://bit.ly/Pengumpulan-PaketPETSHOP


-- Membuat database
CREATE DATABASE PetshopDB;

-- Menggunakan database
USE PetshopDB;

-- Membuat Tabel Hewan
CREATE TABLE Hewan (
    kode_hewan VARCHAR(10) PRIMARY KEY,
    nama_hewan VARCHAR(50),
    tipe VARCHAR(50)
);

-- Membuat Tabel Item
CREATE TABLE Item (
    kode_item VARCHAR(10) PRIMARY KEY,
    nama_item VARCHAR(100),
    kategori VARCHAR(50),
    stok INT,
    harga INT
);

-- Membuat Tabel Pesanan
CREATE TABLE Pesanan (
    kode_pesanan VARCHAR(10) PRIMARY KEY,
    kode_hewan VARCHAR(10),
    kode_produk VARCHAR(10),
    tanggal DATE,
    jumlah INT,
    FOREIGN KEY (kode_hewan) REFERENCES Hewan(kode_hewan),
    FOREIGN KEY (kode_produk) REFERENCES Item(kode_item));



---2
-- Memasukkan data ke Tabel Hewan
INSERT INTO Hewan (kode_hewan, nama_hewan, tipe) VALUES
('H01', 'Kucing', 'Mamalia'),
('H02', 'Anjing', 'Mamalia'),
('H03', 'Gagak', 'Burung');

-- Memasukkan data ke Tabel Item
INSERT INTO Item (kode_item, nama_item, kategori, stok, harga) VALUES
('IT01', 'Whiskas Tuna 1kg', 'Makanan', 30, 25000),
('IT02', 'Dog Treat Bone', 'Makanan', 20, 30000),
('IT03', 'Grooming Basic', 'Grooming', 10, 70000);

-- Memasukkan data ke Tabel Pesanan
INSERT INTO Pesanan (kode_pesanan, kode_hewan, kode_produk, tanggal, jumlah) VALUES
('P01', 'H01', 'IT01', '2025-10-24', 2),
('P02', 'H02', 'IT02', '2025-11-05', 1);
);




---2
SELECT * FROM Hewan;
SELECT * FROM Item;
SELECT * FROM Pesanan;




---3
-- Membuat user admin_hokie
CREATE USER 'admin_hokie'@'localhost' IDENTIFIED BY 'adminhokie2323';

-- Membuat user kasir_hokie
CREATE USER 'kasir_hokie'@'localhost' IDENTIFIED BY 'kasirdimanja';

-- Memberikan seluruh hak akses pada database PetshopDB ke admin_hokie
GRANT ALL PRIVILEGES ON PetshopDB.* TO 'admin_hokie'@'localhost';

-- Memberikan hak akses INSERT, SELECT, UPDATE pada tabel Pesanan ke kasir_hokie
GRANT INSERT, SELECT, UPDATE ON PetshopDB.Pesanan TO 'kasir_hokie'@'localhost';

-- Menampilkan hak akses untuk admin_hokie
SHOW GRANTS FOR 'admin_hokie'@'localhost';

-- Menampilkan hak akses untuk kasir_hokie
SHOW GRANTS FOR 'kasir_hokie'@'localhost';



---4
-- Membuat view v_item
CREATE VIEW v_item AS
SELECT nama_item, stok, harga
FROM Item;

-- Memberikan hak akses SELECT pada view v_item ke kasir_hokie
GRANT SELECT ON PetshopDB.v_item TO 'kasir_hokie'@'localhost';



---5
SELECT 
    'Di toko ada' AS '', 
    nama_item, 
    'dengan kategori' AS '', 
    kategori, 
    'sebanyak' AS '', 
    stok 
FROM Item;


---6
SELECT nama_hewan 
FROM Hewan 
WHERE nama_hewan LIKE '%k';



---7
-- Mengubah delimiter agar bisa menggunakan ; di dalam trigger
DELIMITER $$

CREATE TRIGGER kurangiStok
AFTER INSERT ON Pesanan
FOR EACH ROW
BEGIN
    UPDATE Item 
    SET stok = stok - NEW.jumlah 
    WHERE kode_item = NEW.kode_produk;
END$$

-- Mengembalikan delimiter ke default
DELIMITER ;




--8
-- login ke user kasir
mysql -u kasir_hokie -p
kasirdimanja

-- Memasukkan data pesanan baru (menggunakan CURDATE() untuk 'Tanggal sekarang')
INSERT INTO Pesanan (kode_pesanan, kode_hewan, kode_produk, tanggal, jumlah) VALUES
('P04', 'H02', 'IT02', CURDATE(), 5),
('P05', 'H03', 'IT03', CURDATE(), 1);

-- Memonitor tabel stok (via view yang dibuat admin)
-- Stok IT02 (awalnya 20) akan berkurang 5 (dari P04) dan 1 (dari P02) -> sisa 14
-- Stok IT03 (awalnya 10) akan berkurang 1 (dari P05) -> sisa 9
SELECT * FROM v_item;



---9
SELECT p.tanggal, p.jumlah, h.nama_hewan, i.nama_item 
FROM Pesanan p
JOIN Hewan h ON p.kode_hewan = h.kode_hewan
JOIN Item i ON p.kode_produk = i.kode_item
ORDER BY p.jumlah DESC;


--10
-- Mencabut semua hak akses (INSERT, SELECT, UPDATE) dari kasir_hokie di tabel Pesanan
REVOKE ALL PRIVILEGES ON PetshopDB.Pesanan FROM 'kasir_hokie'@'localhost';

-- (Opsional) Verifikasi bahwa hak akses sudah dicabut
SHOW GRANTS FOR 'kasir_hokie'@'localhost';