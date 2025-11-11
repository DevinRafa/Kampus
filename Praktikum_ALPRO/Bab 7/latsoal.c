#include <stdio.h>

struct satuanjam{
    int jam;
    int menit;
    int detik;
};

struct satuanjam TambahJam(struct satuanjam *j1, struct satuanjam *j2){
    struct satuanjam j1_copy;
    struct satuanjam j2_copy;
    j1_copy = *j1;
    j2_copy = *j2;
    j1_copy.jam;
    int jamplus = j1_copy.jam + j2_copy.jam;
    int menitplus = j1_copy.menit + j2_copy.menit;
    int detikplus = j1_copy.detik + j2_copy.detik;
    
    while (detikplus >= 60 || menitplus >= 60){
        if(detikplus >= 60){
            detikplus -= 60;
            menitplus += 1;
        }
        if(menitplus >= 60){
            menitplus -= 60;
            jamplus += 1;
        }
    }

    struct result{
        int jam;
        int menit;
        int detik;
    };
    struct satuanjam result = {jamplus, menitplus, detikplus};

    return result;
}

int main(){
    struct satuanjam j1 = {9,10,50};
    struct satuanjam j2 = {7,2,32};
    
    struct satuanjam result = TambahJam(&j1, &j2);
    printf("result jam: %d\nresult menit: %d\nresult detik: %d\n", result.jam, result.menit, result.detik);

    return 0;
}