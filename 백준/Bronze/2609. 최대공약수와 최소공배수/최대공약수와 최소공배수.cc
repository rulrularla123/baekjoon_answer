#include <stdio.h>

int main(void) {
    int a, b, temp, c, d;
    scanf("%d %d", &a, &b);
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    d = a-1;
    for(d=d; d>=1; d--){
        if(a%d==0 && b%d==0){
            c = d;
            break;
        }
    }
    if(a==b){
        printf("%d\n%d", a, b);
    }
    else{
        printf("%d\n%d", c, a*b/c);
    }
    return 0;
}