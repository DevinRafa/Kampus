#include <iostream>

int tutup = 0;
int roti = 3;
int jml_hari = 10;
int hari = 1;
int main()
{
    // for (int i = 0; i < 10; ++i)
    // {
    //     if (i != 5)
    //         continue;
    //     std::cout << i << ' ';      // this statement is skipped each time i != 5
    // }
    // std::cout << '\n';

    // for (int j = 0; 2 != j; ++j)
    //     for (int k = 0; k < 5; ++k) // only this loop is affected by continue
    //     {
    //         if (k == 3)
    //             continue;
    //         // this statement is skipped each time k == 3:
    //         std::cout << '(' << j << ',' << k << ") ";
    //     }
    // std::cout << '\n';
    

    while(hari<=jml_hari){
        if (hari%5==0){
            tutup += 1;
            hari += 1;
            continue;
        }
        roti += 3;
        std::cout<<hari<<' ';
        hari++;
    }
    std::cout<<'\n'<<"hari = "<<hari;
    std::cout<<'\n'<<"roti = "<<roti;
    std::cout<<'\n'<<"tutup = "<<tutup;


    // for (hari=1; hari<=jml_hari; hari++){
    //     if (hari%5==0){
    //         tutup += 1;
    //         continue;
    //     }
    //     roti += 3;
    //     std::cout<<hari<<' ';    
    // }
    // std::cout<<'\n'<<"hari = "<<hari;
    // std::cout<<'\n'<<"roti = "<<roti;
    // std::cout<<'\n'<<"tutup = "<<tutup;
    return 0;
}