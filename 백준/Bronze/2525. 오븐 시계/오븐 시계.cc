#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    a = a+(b+c)/60;
    if(a>=24){
        a -= 24;
    }
    b = (b+c) - 60*((b+c)/60);
    printf("%d %d", a, b);
}