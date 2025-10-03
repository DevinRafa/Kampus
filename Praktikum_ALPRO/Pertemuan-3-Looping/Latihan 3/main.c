// Mencari nilai terkecil dari daftar angka input user

#include <stdio.h>
int angka_terkecil, angka;

int main(){
    printf("Masukan angka sebanyak 10 kali: ");
    scanf("%d", &angka_terkecil);

    for (int i=1; i<10; i++){
        printf("Masukan angka sebanyak 10 kali: ");
        scanf("%d", &angka);

        if (angka_terkecil>=angka){
            angka_terkecil = angka;
        }
    }
    printf("angka terkecil dari 10 bilangan: %d",angka_terkecil);
}