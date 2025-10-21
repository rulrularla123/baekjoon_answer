#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a+b) * (a-b));
}