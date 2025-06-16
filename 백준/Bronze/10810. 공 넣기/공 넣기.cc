#include <stdio.h>

int main() {
    int a[100]={0,}, b, c, d, leng, su;
    scanf("%d %d", &su, &leng);
    for(int i=0; i<leng; i++){
        scanf("%d %d %d", &b, &c, &d);
        for(b=b; b<=c; b++){
            a[b-1] = d;
        }
    }
    for(int i=0; i<su; i++){
        printf("%d ", a[i]);
    }
}