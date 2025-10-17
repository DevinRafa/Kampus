"""
    1. hari pertama 5 roti
    2. per hari berikutnya +3
    3. jika hari sebelumnya 12=1/2
    4. Harga satuan roti 8000
    5. setiap 4 hari kerja hari ke 5 akan tutup
"""

# Meminta input jumlah hari dari pengguna
jml_hari = int(input("Masukkan Jumlah Hari: "))

# Inisialisasi variabel awal dengan nilai 0
harga = 8000
total_roti = 0
total_tutup = 0
roti_hari_sebelumnya = 0 # Menyimpan jumlah roti pada hari kerja SEBELUMNYA

# Looping untuk setiap hari
for hari_ke in range(1, jml_hari + 1):
    
    # 1. Cek apakah hari ini toko tutup
    if hari_ke % 5 == 0:
        total_tutup += 1
        # 'continue' akan melompati sisa kode di loop ini
        # dan langsung lanjut ke hari berikutnya.
        continue

    # --- Jika kode sampai di sini, artinya toko BUKA ---
    
    roti_hari_ini = 0 # Inisialisasi roti untuk hari ini
    
    # 2. Aturan produksi hari pertama buka
    # (ditandai dengan total_roti yang masih 0)
    if total_roti == 0:
        roti_hari_ini = 5
    
    # 3. Aturan produksi setengah jika hari sebelumnya >= 12
    elif roti_hari_sebelumnya >= 12:
        roti_hari_ini = roti_hari_sebelumnya // 2 # integer division
        
    # 4. Aturan produksi normal (bertambah 3 dari hari sebelumnya)
    else:
        roti_hari_ini = roti_hari_sebelumnya + 3
    
    # Menambahkan roti yang diproduksi hari ini ke total
    total_roti += roti_hari_ini 
    
    # Memperbarui catatan produksi hari sebelumnya untuk perhitungan esok hari
    roti_hari_sebelumnya = roti_hari_ini

# Menghitung total pendapatan (dilakukan setelah loop selesai)
total_pendapatan = total_roti * harga

# Mencetak hasil akhir
print("--- Hasil Simulasi ---")
print(f"Total roti yang diproduksi: {total_roti}")
print(f"Total hari toko tutup: {total_tutup}")
# Menambahkan format ribuan agar mudah dibaca
print(f"Total pendapatan: Rp {total_pendapatan:,}")