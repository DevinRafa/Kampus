jml_hari = int(input("Masukan jumlah hari: "))
hari = 1
pakan = 0
benih = 0
lele_dewasa = 0
lele_jual = 0
lele_total = 0
pendapatan = int

while(hari<=jml_hari):
    if hari==1 and hari//2==1:
        benih += 20
    elif hari//2==0:
        pakan += 250
        if hari//3==0:
            lele_dewasa += 4
            benih -= 4
            if hari//5==0 and benih <= 10:
                benih += 5
                if hari//7==0:
                    lele_jual += lele_dewasa
                    lele_dewasa -= lele_dewasa
        elif hari//5==0 and benih <= 10:
            benih += 5  
            if hari//7==0:
                lele_jual += lele_dewasa
                lele_dewasa -= lele_dewasa
        elif hari//7:
            lele_jual += lele_dewasa
            lele_dewasa -= lele_dewasa
    elif hari//2==1:
        pakan += 150
        if hari//3==0:
            lele_dewasa += 4
            benih -= 4
            if hari//5==0 and benih <= 10:
                benih += 5
                if hari//7==0:
                    lele_jual += lele_dewasa
                    lele_dewasa -= lele_dewasa
        elif hari//5==0 and benih <= 10:
            benih += 5  
            if hari//7==0:
                lele_jual += lele_dewasa
                lele_dewasa -= lele_dewasa
        elif hari//7:
            lele_jual += lele_dewasa
            lele_dewasa -= lele_dewasa
    hari += 1
lele_total += lele_jual + lele_dewasa
pendapatan = lele_jual*4000

print(f"jumlah benih lele tersisa: {benih}")
print(f"jumlah lele keseluruhan: {lele_total}")
print(f"jumlah pakan yang diberikan: {pakan}")
print(f"totala pendapatan: {pendapatan}")