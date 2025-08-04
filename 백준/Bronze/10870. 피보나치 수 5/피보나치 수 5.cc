#include <stdio.h>

long long int m[91]={0};

long long int fibo(int n){
    if(n < 2){
        m[n] = n;
        return n;
    }
    if(m[n] != 0) return m[n];
    m[n] = fibo(n-1) + fibo(n-2);
    return fibo(n-1) + fibo(n-2);
}

int main() {
    long long int a;
    scanf("%lld", &a);
    fibo(a);
    printf("%lld", m[a]);
}