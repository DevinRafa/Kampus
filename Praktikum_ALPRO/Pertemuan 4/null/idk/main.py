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
total_roti = int
total_tutup = int
roti_hari_sebelumnya = 0

# menghitung Jumlah roti

for i in range(1, jml_hari + 1):
    if i == 1:
        roti_hari_ini = 5
    elif total_roti >= 12:
        roti_hari_ini // 2
    else:
        roti_hari_ini = roti_hari_sebelumnya + 3
    
    total_roti += roti_hari_ini 
    roti_hari_sebelumnya = roti_hari_ini
    
    if i % 5 == 0:
        total_tutup += 1

total_pendapatan = total_roti * harga

print(total_roti)
print(total_tutup)
print(total_pendapatan)