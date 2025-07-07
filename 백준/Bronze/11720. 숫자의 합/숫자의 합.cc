#include <stdio.h>

int main() {
    char a[100];
    int sum = 0, n;
    scanf("%d", &n);
    scanf("%s", a);
    for(int i=0; i<n; i++){
        sum += a[i]-'0';
    }
    printf("%d", sum);
}