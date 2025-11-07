"""
hari pertama 5 roti
per hari berikutnya +3
jika hari sebelumnya 12=1/2
Harga 8000
setiap 4 hari kerja hari ke 5 akan tutup
"""
# output
# total roti
# total took tutup
# total pendapatan


jml_hari = int (input("Masukkan Jumlah Hari: "))
harga = 8000
total_roti = 0
total_tutup = 0
roti_hari_sebelumnya = 0


# menghitung Jumlah roti

for i in range(1, jml_hari + 1):
    if i % 5 == 0:
        total_tutup += 1
        continue
    elif i == 1:
        roti_hari_ini = 5
    elif roti_hari_sebelumnya >= 12:
        roti_hari_ini = roti_hari_sebelumnya // 2
    else:
        roti_hari_ini = roti_hari_sebelumnya + 3

    total_roti += roti_hari_ini
    roti_hari_sebelumnya = roti_hari_ini
    

total_pendapatan = total_roti * harga

print(f"total roti: {total_roti}")
print(f"jumlah hari tutup: {total_tutup}")
print(f"total pendapatan: {total_pendapatan}")