#include <stdio.h>

int main() {
    int a=0, c, end=0;
    char ox[80];
    scanf("%d", &c);
    for(int j=0; j<c; j++){
        scanf("%s", ox);
        for(int i=0; ox[i]!='\0'; i++){
            if(ox[i] == 'O') a++;
            else a=0;
            end += a;
        }
        printf("%d\n", end);
        end = 0;
        a = 0;
    }
}