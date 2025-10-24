#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b == 1 || (a <= 11 || a >= 17)) printf("280");
    else printf("320");
}