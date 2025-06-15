#include <stdio.h>

int main() {
    int a[1000000], b, c=0, d=0;
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%d", &a[i]);
    }
    c = a[0];
    d = a[0];
    for(int i=1; i<b; i++){
        if(c<a[i]){
            c = a[i];
        }
        if(d>a[i]){
            d = a[i];
        }
    }
    printf("%d %d", d, c);
}