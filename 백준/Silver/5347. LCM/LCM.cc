#include <stdio.h>

int main(void) {
    long long int a, b, c, temp, d;
    scanf("%lld", &a);
    for(int i=0; i<a; i++){
        scanf("%lld %lld" ,&b, &c);
        if(c>b){
            temp = b;
            b = c;
            c = temp;
        }
        d = c;
        for(d=d; d>1; d--){
            if(b%d==0 && c%d==0) break;
        }
        printf("%lld\n", b*c/d);
    }
}