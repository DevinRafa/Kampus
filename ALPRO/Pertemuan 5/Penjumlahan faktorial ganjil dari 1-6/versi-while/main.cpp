/*
    Program membuat penjumlahan faktorial ganji di angka 1-6 menggunakan for loops
    I. S. = Program memasukan nilai 6 di variable angka untuk batas akhir program
    F. S. = Program menampilkan dari faktorial ganjil dari 1-6
*/

#include <iostream>
using namespace std;

// Kamus Data
int angka,hasil,jml,i,j;

// Algoritma utama
int main(){
    angka=6;
    i=1;
    jml = 0;
    while(i<=angka){
        hasil=1;
        j=1;
        while(j<=i){
            hasil=hasil*j;
            j++;
        }
        i=i+2;
        jml=jml+hasil;
    }
    cout<<jml;
    return 0;
}