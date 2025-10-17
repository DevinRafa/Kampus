/*
    - menghitung rara-rata
    - user diminta memasukan sejumlah n bilangan kemudian
      program akan menghitung jumlah rata-rata dari bilangan yang
      dimasukan oleh pengguna
*/

#include <stdio.h>

// definisi fungsi
float rata2(int looping){
    float nilai;
    float jumlah = 0;
    for (int i=1; i<=looping; i++){
        // printf("i = %d\n", i);
        printf("masukan nilai %d: ",i ,": ");
        scanf("%f",&nilai);
        // printf("nilai = %f\n",nilai);
        jumlah += nilai;
    }
    // printf("looping = %d\n",looping);
    // printf("jumlah = %d\n",jumlah);
    float rata_rata = jumlah/looping;
    return rata_rata;
}

int main(){
    float hasil = rata2(2);
    printf("hasil rata-rata = %.2f",hasil);
    return 0;
}