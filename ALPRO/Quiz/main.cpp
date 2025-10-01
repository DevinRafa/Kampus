#include <iostream>
using namespace std;

int i;
int nilai[99];
int siswa = 100;


int main(){
    for(i=1;i<=siswa;i++){
        cin>>nilai[i-1];
        if(nilai[i-1]>70){
            cout<<"lulus"<<"\n";
        }
        else{
            cout<<"gagal"<<endl;
        }
    }


    return 0;
}