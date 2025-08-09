#include <stdio.h>

int main() {
    int a, b, c[10], d, cnt = 0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        scanf("%d", &c[i]);
    }
    d = a-1;
    for(int i=0; i<a; i++, d--){
        cnt += b / c[d];
        b %= c[d];
    }
    printf("%d", cnt);
}