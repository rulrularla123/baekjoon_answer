#include <stdio.h>

#define MOD 1000000007

long long int l[10001]={1, 1, 5, 21, };
long long int m[10001]={0, 3, 13, 57, };

long long int fibo(int n){
    if(n<=1) return 1;
    if(n==2) return 5;
    if(l[n] != 0) return l[n];
    l[n] = ( ( (5*fibo(n-1) % MOD - 3*fibo(n-2) % MOD + fibo(n-3) % MOD) % MOD ) + MOD ) % MOD;
    return l[n];
}

long long int fibo2(int n){
    if(n<=1) return 3;
    if(n==2) return 13;
    if(m[n] != 0) return m[n];
    m[n] = (4*fibo2(n-1) + l[n-1]) % MOD;
    return m[n];
}



int main() {
    int b;
    long long int a;
    scanf("%lld", &b);
    fibo(4000);
    fibo2(4000);
    for(int i=0; i<b; i++){
        scanf("%lld", &a);
        if(a % 3 != 0) printf("0\n");
        else{
            printf("%lld\n", m[a/3]);
        }
    }
}