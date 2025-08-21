#include <stdio.h>

int main() {
    int a, sk=0, cy=0, i=0;
    scanf("%d", &a);
    for(i=i; a >= 3; i++){
        if(i % 2 == 0){
            sk++;
        }
        else{
            cy++;
        }
        a-=3;
    }
    for(i=i; a > 0; i++){
        if(i % 2 == 0){
            sk++;
        }
        else{
            cy++;
        }
        a--;
    }
    if(sk > cy){
        printf("SK");
    }
    else{
        printf("CY");
    }
}