#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld", &a);
    for(int i=0; i<a; i++){
        scanf("%lld %lld", &b, &c);
        d = 1;
        for(int j=0; j<b; j++){
            d *= c-j;
            d /= j+1;
        }
        printf("%lld\n", d);
    }
}