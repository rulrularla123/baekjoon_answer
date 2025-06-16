#include <stdio.h>

int main() {
    int b;
    float a[1000]={0,}, c, d=0, avg=0;
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%f", &c);
        if(d < c){
            d = c;
        }
        a[i] = c;
    }
    for(int i=0; i<b; i++){
        a[i] = a[i]/(d*100);
    }
    for(int i=0; i<b; i++){
        avg += a[i];
    }
    printf("%f", avg/b*10000);
}