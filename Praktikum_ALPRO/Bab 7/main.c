#include <stdio.h>

int main(){
    int a = 20;
    int b =0;

    if (a>6){
        a -= 6;
        b += 6;
    }

    printf("a: %d", a);
    return 0;
}