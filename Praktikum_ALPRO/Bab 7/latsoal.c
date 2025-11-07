#include <stdio.h>

struct satuanjam{
    int jam;
    int menit;
    int detik;
};

int TambahJam(struct satuanjam *j1, struct satuanjam *j2){
    struct satuanjam j1_copy;
    struct satuanjam j2_copy;
    j1_copy = *j1;
    j2_copy = *j2;
    j1_copy.jam;
    int jamplus = j1_copy.jam + j2_copy.jam;
    int menitplus = j1_copy.menit + j2_copy.menit;
    int detikplus = j1_copy.detik + j2_copy.detik;
    
    struct result{
        int jam;
        int menit;
        int detik;
    };
    return detikplus;
}

int main(){
    struct satuanjam j1 = {9,10,50};
    struct satuanjam j2 = {7,2,32};
    
    int result = TambahJam(&j1, &j2);
    printf("result: %d", result);

    return 0;
}