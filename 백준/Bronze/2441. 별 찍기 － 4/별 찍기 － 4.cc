#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=0, j=a; i<a, j>0; i++, j--){
        for(int k=0; k<i; k++){
            printf(" ");
        }
        for(int k=0; k<j; k++){
            printf("*");
        }
        printf("\n");
    }
}