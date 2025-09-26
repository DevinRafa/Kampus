#include <iostream>
using namespace std;

// Kamus Data
int A[2][2] = {{1,2},{3,4}};
int B[2][2] = {{5,6},{7,8}};
int hasil[2][2];

// Algoritma Utama
int main(){
    hasil[0][0] = (A[0][0]*B[0][0])+(A[0][1]*B[1][0]);
    hasil[0][1] = (A[0][0]*B[0][1])+(A[0][1]*B[1][1]);
    hasil[1][0] = (A[1][0]*B[0][0])+(A[1][1]*B[1][0]);
    hasil[1][1] = (A[1][0]*B[0][1])+(A[1][1]*B[1][1]);

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<hasil[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}