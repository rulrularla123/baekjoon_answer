#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    printf(a % 5 == 2 || a % 5 == 0 ? "CY" : "SK");
}