#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < a; j++){
            if(a-j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}