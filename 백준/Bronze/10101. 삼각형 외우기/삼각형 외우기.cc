#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a==60 && b==60 && c==60 && a+b+c==180) printf("Equilateral");
    else if(((a==b) || (b==c) || (c==a)) && a+b+c==180) printf("Isosceles");
    else if(((a!=b) && (b!=c) && (c!=a)) && a+b+c==180) printf("Scalene");
    else printf("Error");
}