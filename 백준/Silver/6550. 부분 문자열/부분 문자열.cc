#include <stdio.h>

int main() {
    char a[100000], b[100000];
    int c = 0, d=0;
    while(scanf("%s %s", a, b) != EOF){
        for(int i=0; b[i]!='\0'; i++){
            if(a[c] == b[i]){
                d += 1;
                c += 1;
            }
        }
        for(int i=0; a[i] != '\0'; i++){
            c = i;
        }
        if(c+1==d){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        c = 0;
        d = 0;
    }
}