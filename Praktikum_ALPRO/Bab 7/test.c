#include <stdio.h>

struct Mahasiswa{
    char nama[50];
    char nim[10];
    int umur;
};

int main(){
    struct Mahasiswa m1 = {"Devin", "H1D025066", 18};
    printf("Nama: %s\n", m1.nama);
    printf("Nama: %s\n", m1.nim);
    printf("Nama: %d\n", m1.umur);

    return 0;
}