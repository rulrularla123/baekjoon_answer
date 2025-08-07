#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=0; a!=0 && b!=0; i++){
        if(a%b==0){
            printf("multiple\n");
        }
        else if(b%a==0){
            printf("factor\n");
        }
        else{
            printf("neither\n");
        }
        scanf("%d %d", &a, &b);
    }
}