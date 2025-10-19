"""Mencari nilai terkecil dari daftar angka input user"""

angka_terkecil = int(input("Masukan angka sebanyak 10 kali: "))

for i in range (1, 10):
    angka = int(input("Masukan angka sebanyak 10 kali: "))
    if angka_terkecil>=angka:
        angka_terkecil=angka

print(f"angka terkecil dari 10 bilangan: {angka_terkecil}")
