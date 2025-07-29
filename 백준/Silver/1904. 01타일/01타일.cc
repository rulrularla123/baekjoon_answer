#include <stdio.h>

long long int be[10000000] = {0, };

long long int fibo(int c){
    if(c < 2){
        be[c] = c;
        return be[c];
    }
    if(be[c] != 0) return be[c];
    be[c] = (fibo(c-1) + fibo(c-2)) % 15746;
    return be[c];
}

int main() {
    long long num;
    scanf("%lld", &num);
    fibo(num+1);
    printf("%lld", be[num+1]);
}