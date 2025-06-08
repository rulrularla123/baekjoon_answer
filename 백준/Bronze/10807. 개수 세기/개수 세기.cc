#include <stdio.h>

int main() {
    int a[100], b, c, d=0;
    scanf("%d", &b);
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &c);
    for(int i=0; i<b; i++){
        if(a[i]==c){
            d += 1;
        }
    }
    printf("%d", d);
}