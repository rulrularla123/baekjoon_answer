#include <stdio.h>

int main() {
    int a, c, r;
    scanf("%d", &a);
    if(a==3){
        printf("0");
    }
    else{
        c = a * (a-1) * (a-2) * (a-3);
        r = 4 * 3 * 2 * 1;
        printf("%d", c/r);
    }
}