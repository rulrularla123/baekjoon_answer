#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if(a+c < b+d) printf("Hanyang Univ.");
    else if(a+c > b+d) printf("Yongdap");
    else printf("Either");
}