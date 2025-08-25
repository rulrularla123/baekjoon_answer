#include <stdio.h>

char m[1000001];

int main(){
    long long a, b, i, s, x, c=0; 
    scanf("%lld %lld", &a, &b);
    for(i=2; i*i<=b; i++){ 
        s=i*i;
        x=((a+s-1)/s)*s; 
        for(int j=0; x<=b; x+=s) m[x-a]=1; 
    }
    for(i=0;i<=b-a;i++) c+=!m[i];
    printf("%lld\n",c);
}