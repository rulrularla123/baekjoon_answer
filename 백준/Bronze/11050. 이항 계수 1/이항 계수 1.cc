#include <stdio.h>

int main() {
    long long int b, c, d;
    scanf("%lld %lld", &c, &b);
    d = 1;
    for(int j=0; j<b; j++){
        d *= c-j;
        d /= j+1;
    }
    printf("%lld\n", d);
}