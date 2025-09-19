/*
    Program menentukan nilai rata rata 5 siswa
    I. S. = program meminta input nilai setiap siswa
    F. S. = program menampilkan rata-rata dari 5 siswa tersebut
*/

#include <iostream>
using namespace std;

// Kamus Data
int i,total,nilai;
float rata_rata;

// Algoritma Utama
int main(){
    for(i=1;i<=5;i++){
        cout<<"masukan nilai siswa ke-"<<i<<": ";
        cin>>nilai;
        total+=nilai;
        }
    rata_rata = total/5;
    cout<<rata_rata;
    return 0;
}