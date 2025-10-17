// MEnampilkan Bilangan Genap dari 1-50

#include <stdio.h>

int main(){
    printf("Angka genap antara 1-50 adalah: \n");
    for (int i=1;i<=50;i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}