#include <iostream>
using namespace std;

// Kamus Data
int A[2][2] = {{1,2},{3,4}}; 
int B[2][2] = {{5,6},{7,8}};
int hasil[2][2];

int main(){
    cout<<hasil[0][0]<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                hasil[i][j] = hasil[i][j]+((A[j][k]*B[j][k])+(A[j][k]*B[j][k]));
                
            }
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
}