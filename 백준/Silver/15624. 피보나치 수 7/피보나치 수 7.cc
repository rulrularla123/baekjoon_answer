#include <stdio.h>

long long int m[1000001]={0, 1, };

long long int fibo(int n){
    if(n < 2){
        m[n] = n;
        return n;
    }
    if(m[n]) return m[n];
    m[n] = (fibo(n-1) + fibo(n-2))% 1000000007;
    return m[n] % 1000000007;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld",  fibo(a));
}