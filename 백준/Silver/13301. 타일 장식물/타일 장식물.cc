#include <stdio.h>

long long int be[10000] = {0, };

long long int fibo(int c){
    if(c < 2){
        be[c] = c;
        return be[c];
    }
    if(be[c] != 0) return be[c];
    be[c] = fibo(c-1) + fibo(c-2);
    return be[c];
}

int main() {
    long long num;
    scanf("%lld", &num);
    fibo(num);
    printf("%lld", be[num]*4 + be[num-1]*2);
}