#include <stdio.h>

int main() {
    int a[100], leng, yul, d, e, temp;
    for(int i=0; i<100; i++){
        a[i]=i+1;
    }
    scanf("%d %d", &yul, &leng);
    for(int i=0; i<leng; i++){
        scanf("%d %d", &d, &e);
        for(d=d, e=e; d<=e && e>=d; d++, e--){
            temp = a[d-1];
            a[d-1] = a[e-1];
            a[e-1] = temp;
            
        }
    }
    for(int i=0; i<yul; i++){
        printf("%d ", a[i]);
    }
}