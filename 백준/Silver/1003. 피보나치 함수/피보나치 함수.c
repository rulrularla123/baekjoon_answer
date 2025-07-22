#include <stdio.h>

long long int c0[50] = {1, 0, 1, };
long long int c1[50] = {0, 1, 1, };

int fibo(int c){
    for(int i=2; i<=c; i++){
        if(c0[i] == 0){
            c0[i] =  c0[i-1] + c0[i-2];
        }
        if(c1[i] == 0){
            c1[i] =  c1[i-1] + c1[i-2];
        }
    }
    printf("%lld %lld\n", c0[c], c1[c]);
}

int main() {
    int num, a;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d", &a);
        fibo(a);
    }
}