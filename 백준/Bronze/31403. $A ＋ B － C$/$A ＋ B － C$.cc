#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);
    if(b>=1000) a*= 10000;
    else if(b>=100) a*=1000;
    else if(b>=10) a*=100;
    else a*=10;
    printf("%d", a+b-c);
}