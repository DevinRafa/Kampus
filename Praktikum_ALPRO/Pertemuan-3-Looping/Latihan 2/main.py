"""Menjumlahkan Deret Bilangan dari 1 hinnga bilangan yang diimputkan oleh user"""

i = 1
hasil = 0
bil_akhir = int(input("masukan bilangan akhir dari penjumlahan deret bilangan: "))

while i<=bil_akhir:
    hasil = hasil+i
    print(hasil)
    i += 1
