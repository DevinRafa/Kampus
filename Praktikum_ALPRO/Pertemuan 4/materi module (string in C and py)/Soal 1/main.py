'''
    Buat program yang menhitung faktorial
    dari suatu bilangan dalam python
'''

def faktorial(angka:int, faktor:int):
    '''fungsi penghiitung faktorial'''
    hasil = angka*angka
    for i in range(1, faktor-1):
        print(i)
        hasil = hasil*angka
        print(f"hasil perhitungan sementara: {hasil}")
    return hasil

JAWABAN = faktorial(5,9)
print(f"jawaban = {JAWABAN}")
