#include <stdio.h>

int main() {
    int a[10]={0,}, b, c=0, d=0, e=0;
    for(int i=0; i<10; i++){
        scanf("%d", &b);
        for(int j=0; j<10; j++){
            if(b%42!=a[j]){
                c += 1;
            }
        }
        if(b%42==0){
            e+=1;
        }
        if(c==10){
            a[i] = b%42;
            d += 1;
        }
        c = 0;
    }
    if(e>0){
        d+=1;
    }
    printf("%d", d);
}