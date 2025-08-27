#include <stdio.h>

long long int m[91]={1, 1, 3, 0};

long long int fibo(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 1;
    }
    if(m[n] != 0) return m[n];
    m[n] = (fibo(n-1) + fibo(n-2) + 1) % 1000000007;
    return m[n];
}

int main() {
    long long int a;
    scanf("%lld", &a);
    fibo(a);
    printf("%lld", m[a]);
}