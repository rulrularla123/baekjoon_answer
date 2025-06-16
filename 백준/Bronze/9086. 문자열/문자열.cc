#include <stdio.h>

int main() {
    char a[100];
    int b, c=0;
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%s", a);
        for(int i = 0; a[i]!='\0'; i++){
            c += 1;
        }
        printf("%c%c\n", a[0], a[c-1]);
        c = 0;
    }
}