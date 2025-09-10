#include <stdio.h>

int main(void){
    int a=1, b=1;
    scanf("%d %d", &a, &b);
    for(int i=0; a!=0 && b!=0; i++){
        printf("%d\n", a+b);
        scanf("%d %d", &a, &b);
    }
}