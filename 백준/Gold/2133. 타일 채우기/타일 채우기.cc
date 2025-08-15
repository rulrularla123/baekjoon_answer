#include <stdio.h>

long long int m[91]={3, 11, };

long long int fibo(int n){
    if(n==0) return 3;
    if(n==1) return 11;
    if(m[n] != 0) return m[n];
    m[n] = 4*fibo(n-1) - fibo(n-2);
    return m[n];
}

int main() {
    long long int a;
    scanf("%lld", &a);
    int k=a/2-1;
    if(a % 2 != 0) printf("0");
    else{
        printf("%lld", fibo(k));
    }
}