#include <stdio.h>

int count = 0;

long long int fibo(int n){
    int t, b=1, i, a=0;
    for(i=0; i<n; i++){
        t = a;
        a = b;
        b += t;
        if(b >= 1000000007) b %= 1000000007;
    }
    return a;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld %d", fibo(a), a-2);
}