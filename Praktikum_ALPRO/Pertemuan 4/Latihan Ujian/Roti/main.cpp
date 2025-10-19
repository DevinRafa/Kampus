#include <iostream>
using namespace std;

int main(){
    int jml_hari;
    int hari = 1;
    int roti = 0, tutup = 0, produksi_roti = 0;
    int omset;
    

    cout<<"Masuka jumlah hari: ";
    cin>>jml_hari;

    while (hari <= jml_hari){
        if (hari%5==0){
            hari += 1;
            tutup += 1;
            continue;
        }
        else if(hari==1){
            produksi_roti += 5;
        }
        else if (produksi_roti >= 12){
            produksi_roti /= 2;
        }
        else{
            produksi_roti += 3;
        }
        roti += produksi_roti;
        hari++;

    }
    omset=roti*8000;
    cout<<"total roti: "<<roti<<endl;
    cout<<"total hari tutup: "<<tutup<<endl;
    cout<<"total pendapatan: "<<omset<<endl;

    return 0;
}