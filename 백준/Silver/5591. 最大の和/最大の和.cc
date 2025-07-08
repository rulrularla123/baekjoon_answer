#include <stdio.h>

int main(void) {
    int a, b, c[100000], k[100000]={0}, max=0;
    scanf("%d %d", &a, &b);
    for(int i=0; a>=i; i++){
        scanf("%d", &c[i]);
    }
    for(int i=0; i<a; i++){
        if(i+b-1>a){
            break;
        }
        for(int j=i; j<b+i; j++){
            k[i] += c[j];
        }
    }
    max = k[0];
    for(int i=1; i<a-b+1; i++){
        if(k[i] > max){
            max = k[i];
        }
    }
    printf("%d", max);
}