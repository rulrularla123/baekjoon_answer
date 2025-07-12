#include <stdio.h>

int main() {
    int a, b, c, min=0, max=0;
    scanf("%d", &a);
    scanf("%d", &b);
    min = b;
    max = b;
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        if(b<min){
            min = b;
        }
        if(b>max){
            max = b;
        }
    }
    printf("%d", min*max);
}