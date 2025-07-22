#include <stdio.h>

int main() {
    int a, b=0;
    scanf("%d", &a);
    for(int i=64; a != 0; i >>= 1){
        if(a >= i){
            a -= i;
            b+=1;
        }
        if(a == 0){
            break;
        }
    }
    if(a == 64){
        printf("1");
    }
    else{
        printf("%d", b);
    }
}