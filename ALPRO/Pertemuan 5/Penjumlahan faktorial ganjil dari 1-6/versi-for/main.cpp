/*
    Program membuat penjumlahan faktorial ganji di angka 1-6 menggunakan for loops
*/

#include <iostream>
using namespace std;

int angka,hasil,jml,i,j;

int main(){
    angka = 100;
    jml = 0;
    for(i=1;i<=angka;i++){
        if(i%2 != 0){
            hasil=1;
            for(j=1;j<=i;j++){
                hasil=hasil*j;
            }
            jml=jml+hasil;
        }
    }
    cout<<jml;
    return 0;
}