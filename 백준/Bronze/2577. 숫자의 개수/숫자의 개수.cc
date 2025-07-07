#include <stdio.h>

int main() {
    int a, b, c, d=1, e, count[10]={0};
    scanf("%d %d %d", &a, &b, &c);
    e = a*b*c;
    for(d=d; d<=e/10; d*=10);
    for(d=d; d>=1; d/=10){
        //printf("%d %d\n", e, d);
        count[e/d] += 1;
        e %= d;
    }
    for(int i=0; i<10; i++){
        printf("%d\n", count[i]);
    }
}