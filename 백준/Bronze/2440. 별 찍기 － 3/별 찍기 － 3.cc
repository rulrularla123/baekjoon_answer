#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    b = a;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("*");
        }
        b--;
        printf("\n");
    }
}