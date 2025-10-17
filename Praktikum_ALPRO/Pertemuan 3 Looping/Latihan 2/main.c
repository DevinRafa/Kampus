// Menjumlahkan Deret Bilangan dari 1 hinnga bilangan yang diimputkan oleh user

#include <stdio.h>
int bil_akhir;
int hasil = 0;
int i = 1;

int main(){
    printf("Masukan angka akhir deret penjumlahan: ");
    scanf("%d", &bil_akhir);

    while (i<=bil_akhir){
        hasil += i;
        printf("%d\n",hasil);
        i += 1;
    }
    return 0;
}