#include <stdio.h>

int main() {
    char a[1000], c;
    int b;
    scanf("%s", a);
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        c = a[i];
    }
    printf("%c", c);
}