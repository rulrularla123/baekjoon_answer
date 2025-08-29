#include <stdio.h>

int main() {
    int a=1, c=0, d=0, l=0;
    char b[10];
    scanf("%d", &a);
    for(int i=0; a != 0; i++){
        sprintf(b, "%d", a);
        for(l = l; b[l] != '\0'; l++);
        l -= 1;
        for(int j=0; j <= l; j++, l--){
            if(b[j] != b[l]) c++;
        }
        if(c > 0) printf("no\n");
        else printf("yes\n");
        c = 0;
        l = 0;
        scanf("%d", &a);
    }
}