#include <iostream>
using namespace std;

int main(){
    int jml_hari;
    int hari = 1;
    int roti = 0, tutup = 0, produksi_roti = 0;
    

    cout<<"Masuka jumlah hari: ";
    cin>>jml_hari;

    while (hari <= jml_hari){
        if (hari%5==0){
            hari += 1;
            tutup += 1;
            continue;
        }
        else if(hari==1){
            roti += 5;
        }
        roti += 1;
        hari++;

    }
    cout<<"total hari: "<<hari<<endl;
    cout<<"total roti: "<<roti<<endl;
    cout<<"total tutup: "<<tutup<<endl;

    return 0;
}