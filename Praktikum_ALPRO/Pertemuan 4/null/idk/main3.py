"""
    1. hari pertama 5 roti
    2. per hari berikutnya +3
    3. jika hari sebelumnya 12=1/2
    4. Harga satuan roti 8000
    5. setiap 4 hari kerja hari ke 5 akan tutup
"""

jml_hari = int(input("Masukkan Jumlah Hari: "))

harga = 8000
total_roti = 0
total_tutup = 0
roti_hari_sebelumnya = 0 


for hari_ke in range(1, jml_hari + 1):
    if hari_ke % 5 == 0:
        total_tutup += 1
        continue
    
    roti_hari_ini = 0
    
    if total_roti == 0:
        roti_hari_ini = 5
    
    elif roti_hari_sebelumnya >= 12:
        roti_hari_ini = roti_hari_sebelumnya // 2 
        
    else:
        roti_hari_ini = roti_hari_sebelumnya + 3
    
    total_roti += roti_hari_ini 
    roti_hari_sebelumnya = roti_hari_ini

total_pendapatan = total_roti * harga

print("--- Hasil Simulasi ---")
print(f"Total roti yang diproduksi: {total_roti}")
print(f"Total hari toko tutup: {total_tutup}")

print(f"Total pendapatan: Rp {total_pendapatan:,}")