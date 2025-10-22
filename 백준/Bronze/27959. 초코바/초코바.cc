#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf(a*100 >= b ? "Yes" : "No");
}