#include <stdio.h>

int main() {
    int a, b, pan = 0, fi = 0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        for(int j=2; j<b-1; j++){
            if(b%j==0){
                pan += 1;
                break;
            }
        }
        if(b == 1 || b == 0){
                pan += 1;
            }
        if(pan == 0){
            fi += 1;
        }
        pan = 0;
    }
    printf("%d", fi);
}