#include <stdio.h>

long long int arr[10000003];

long long int rev(long long int a){
    long long int r = 0;
    while(a){
        r = r*10 + a%10;
        a /= 10;
    }
    return r;
}

int main() {
    long long int a = 1, ar, re, b, c, d=0, j;
    for(long long int i=0; i<=10000000; i++){
        arr[i] = i;
    }
    for(long long int i=2; i<=10000000; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=10000000; j+=i){
            arr[j] = 0;
        }
    }
    scanf("%lld", &a);
    if(a==1) a++;
    for(long long int i=a; 10000000; i++){
        if(arr[i] != 0){
            re = rev(arr[i]);
            if(re == arr[i]){
                printf("%lld", re);
                break;
            }
        }
    }
}