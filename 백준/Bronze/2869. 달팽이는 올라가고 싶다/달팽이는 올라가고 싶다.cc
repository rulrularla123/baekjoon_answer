#include <stdio.h>

int main() {
    int a, b, c, i=0, d=0, idk, e, f, j=0;
    scanf("%d %d %d", &a, &b, &c);
    idk = a - b;
    if(idk == 1){
        c -= a;
        j = c;
    }
    else for(j=j; c > a; j++) c -= idk;
    c -= a;
    printf("%d", j+1);
}