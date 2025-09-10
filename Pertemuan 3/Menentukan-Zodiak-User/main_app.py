'''
    program menentukan zodiak user
    I. S. = Program meminta input tahun, bulan, dan tanggal lahir user
    F. S. = Program menampilkan umur dan zodiak user (jika umur < 17)
'''

## Kamus Data
TAHUN_ASLI = 2025
ZODIAK_USER = ""

## Algoritma Utama
# Input dari User
tahun_user = int(input("Masukan tahun lahir anda: "))
bulan_user = int(input("Masukan bulan lahir anda: "))
tanggal_user = int(input("Masukan tanggal lahir anda: "))

# Perhitungan Umur User
umur_tahun_user = TAHUN_ASLI - tahun_user

# Penentuan Zodiak User dengan logika AND dan OR
if (bulan_user == 1 and tanggal_user >= 20) or (bulan_user == 2 and tanggal_user <= 18):
    ZODIAK_USER = "Aquarius"
elif (bulan_user == 2 and tanggal_user >= 19) or (bulan_user == 3 and tanggal_user <= 20):
    ZODIAK_USER = "Pisces"
elif (bulan_user == 3 and tanggal_user >= 21) or (bulan_user == 4 and tanggal_user <= 19):
    ZODIAK_USER = "Aries"
elif (bulan_user == 4 and tanggal_user >= 20) or (bulan_user == 5 and tanggal_user <= 20):
    ZODIAK_USER = "Taurus"
elif (bulan_user == 5 and tanggal_user >= 21) or (bulan_user == 6 and tanggal_user <= 20):
    ZODIAK_USER = "Gemini"
elif (bulan_user == 6 and tanggal_user >= 21) or (bulan_user == 7 and tanggal_user <= 22):
    ZODIAK_USER = "Cancer"
elif (bulan_user == 7 and tanggal_user >= 23) or (bulan_user == 8 and tanggal_user <= 22):
    ZODIAK_USER = "Leo"
elif (bulan_user == 8 and tanggal_user >= 23) or (bulan_user == 9 and tanggal_user <= 22):
    ZODIAK_USER = "Virgo"
elif (bulan_user == 9 and tanggal_user >= 23) or (bulan_user == 10 and tanggal_user <= 22):
    ZODIAK_USER = "Libra"
elif (bulan_user == 10 and tanggal_user >= 23) or (bulan_user == 11 and tanggal_user <= 21):
    ZODIAK_USER = "Scorpio"
elif (bulan_user == 11 and tanggal_user >= 22) or (bulan_user == 12 and tanggal_user <= 21):
    ZODIAK_USER = "Sagitarius"
elif (bulan_user == 12 and tanggal_user >= 22) or (bulan_user == 1 and tanggal_user <= 19):
    ZODIAK_USER = "Capricorn"
else:
    ZODIAK_USER = "Tidak valid (bulan atau tanggal salah)"

# Zodiak hanya ditampilkan jika umur di bawah 17 tahun
if umur_tahun_user >= 17:
    print("Zodiak anda adalah:" ,ZODIAK_USER)
