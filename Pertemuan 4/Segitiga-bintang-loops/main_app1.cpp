/*
    program pembuat segitiga siku siku bintang dari kecil ke banyak
    I. S. = program meminta input tinggi segitiga
    F. S. = program menampilkan gambar segitiga siku-siku bintang
*/

#include <iostream>
using namespace std;

// Kamus Data
int tinggi,i,j;

// Algoritma Utama
int main(){
    cout<<"masukan tinggi segitiga: ";
    cin>>tinggi;
    for(i=1;i<=tinggi;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
            }
        cout<<"\n";
    }
    return 0;
}