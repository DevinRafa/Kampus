#include <stdio.h>
int main(){
    int nilai;
    printf("Masukan Nilai: ");
    scanf("%d",&nilai);
    if (nilai>=85){
        printf("A");
    }
    else if (nilai>=70){
        printf("B");
    }
    else if (nilai>=50){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}