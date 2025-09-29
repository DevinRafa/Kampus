/*
    Program Perkalian Matriks Dua Dimensi
    I. S. = Program dimasukan nilai untuk variable array yang sudah ditentukan
    F. S. = Program menghitung dan menentukan hasil dari perkalian matriks 2D
*/

#include <iostream>
using namespace std;

// Kamus Data
int A[2][2] = {{1,2},{3,4}}; 
int B[2][2] = {{5,6},{7,8}};
int AB[2][2];

// Algoritma Utama
int main(){
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            AB[i][j] = 0;
            for (int k=0; k<2; k++){
                AB[i][j] = AB[i][j]+(A[i][k]*B[k][j]);
            }
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<AB[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}