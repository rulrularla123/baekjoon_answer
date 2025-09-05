#include <stdio.h>

int main() {
    long long int a, b, tmp;
    scanf("%lld %lld", &a, &b);
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    a -= b;
    printf("%lld", a);
}