#include <stdio.h>

int main() {
    char a[100];
    int b=0;
    scanf("%s", a);
    for(int i = 0; a[i]!='\0'; i++){
        b += 1;
    }
    printf("%d", b);
}