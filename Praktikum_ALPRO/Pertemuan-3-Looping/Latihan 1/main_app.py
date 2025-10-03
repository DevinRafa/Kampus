# Menampilkan Bilangan Genap dari 1 - 50

print("Angka genap antara 1-50 adalah: ")
for i in range(1, 51): # saya lebihkan menjadi 51 karena untuk stop di 50
    if i%2 == 0:
        print(i)
