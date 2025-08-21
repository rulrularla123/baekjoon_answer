#include <stdio.h>

int main(void){
    int b;
    scanf("%d", &b);
    printf((b-1)%7==0 || (b-1)%7==2 ? "CY" : "SK");
}