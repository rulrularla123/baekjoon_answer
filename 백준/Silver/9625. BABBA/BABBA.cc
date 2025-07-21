#include <stdio.h>

int be[45] = {0, };

int fibo(int c){
    if(c < 2){
        be[c] = c;
        return be[c];
    }
    if(be[c] != 0) return be[c];
    be[c] = fibo(c-1) + fibo(c-2);
    return be[c];
}

int main() {
    int num, a, b;
    scanf("%d", &num);
    fibo(num);
    printf("%d %d", be[num-1], be[num]);
}