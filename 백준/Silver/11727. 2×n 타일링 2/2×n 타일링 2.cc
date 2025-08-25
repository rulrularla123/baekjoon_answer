#include <stdio.h>

long long int m[1002]={0, 1, 0};

long long int fibo(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    if(m[n] != 0) return m[n];
    m[n] = (fibo(n-1) + (fibo(n-2)*2)) % 10007;
    return m[n];
}

int main() {
    long long int a;
    scanf("%lld", &a);
    fibo(a+1);
    printf("%lld", m[a+1]);
}