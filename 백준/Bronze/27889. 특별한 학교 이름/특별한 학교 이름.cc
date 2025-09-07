#include <stdio.h>

int main() {
    char a[10];
    scanf("%s", a);
    if(a[0] == 'N') printf("North London Collegiate School");
    else if(a[0] == 'B') printf("Branksome Hall Asia");
    else if(a[0] == 'K') printf("Korea International School");
    else if(a[0] == 'S') printf("St. Johnsbury Academy");
}