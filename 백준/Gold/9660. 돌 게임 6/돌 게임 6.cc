#include <stdio.h>

int main(void){
    long long int b;
    scanf("%lld", &b);
    printf((b)%7==0 || (b)%7==2 ? "CY" : "SK");
}