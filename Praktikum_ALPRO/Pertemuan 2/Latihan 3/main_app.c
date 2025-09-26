#include <stdio.h>
int main(){
    int angka;
    printf("Masukan Angka: ");
    scanf("%d", &angka);
    if (angka>0){
        printf("angka bernilai positif");
    }
    else if (angka==0){
        printf("angka bernilai nol");
    }
    else{
        printf("angka bernilai negatif");
    }
}