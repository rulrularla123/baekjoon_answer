#include <stdio.h>

int main() {
    long long int a, b, c, temp;
    scanf("%lld %lld", &a, &b);
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    for(int j=b; j>0; j--){
        if(b%j==0 && a%j==0){
            printf("%lld\n", a*b/j);
            break;
        }
    }
}