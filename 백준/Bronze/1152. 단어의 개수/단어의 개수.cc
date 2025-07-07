#include <stdio.h>

int main() {
    int a = 0, c, i=0;
    char b[1000005];
    fgets(b, sizeof(b), stdin);
    for(i=i; b[i] != '\0'; i++){
        if(b[i] == ' ') a += 1;
    }
    if(b[i-1]=='\n') i--;
    if(i>0) a+=1;
    if(b[i-1] == ' ') a-=1;
    if(b[0] == ' ') a-=1;
    printf("%d", a);
}