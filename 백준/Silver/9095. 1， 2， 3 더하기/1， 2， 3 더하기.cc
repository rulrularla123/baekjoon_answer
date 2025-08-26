#include <stdio.h>

long long int m[91]={1, 0 };

long long int fibo(int n){
    if(n < 0){
        return 0;
    }
    if(n <= 1){
        m[n] = n;
        return n;
    }
    if(m[n] != 0) return m[n];
    m[n] = fibo(n-1) + fibo(n-2) + fibo(n-3);
    return m[n];
}

int main() {
    long long int a, b;
    scanf("%lld", &a);
    for(int i=0; i<a; i++){
        scanf("%lld", &b);
        fibo(b+1);
        printf("%lld\n", m[b+1]);    
    }
}