#include <stdio.h>

int rev(int a){
    int r = 0;
    while(a){
        r = r*10 + a%10;
        a /= 10;
    }
    return r;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", rev(rev(a) + rev(b)));
}