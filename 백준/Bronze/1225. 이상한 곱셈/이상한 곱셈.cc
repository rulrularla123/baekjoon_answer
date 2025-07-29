#include<stdio.h>

int main(){
    long long int n = 0;
    char a[10002], b[10002];
    scanf("%s %s", a, b);
    for(int i = 0; a[i] != '\0'; i++)
        for(int j = 0; b[j] != '\0'; j++)
            n += (a[i] - '0') * (b[j] - '0');
    printf("%lld", n);
}