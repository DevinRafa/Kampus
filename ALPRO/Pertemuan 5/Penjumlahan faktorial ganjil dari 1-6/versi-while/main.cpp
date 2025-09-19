/*
    Program membuat penjumlahan faktorial ganji di angka 1-6 menggunakan for loops
*/

#include <iostream>
using namespace std;

int angka,hasil,jml,i,j;

int main(){
    angka=100;
    i=1;
    jml = 0;
    while(i<=angka){
        hasil=1;
        for(j=1;j<=i;j++){
            hasil=hasil*j;
        }
        i=i+2;
        jml=jml+hasil;
    }
    cout<<jml;
    return 0;
}