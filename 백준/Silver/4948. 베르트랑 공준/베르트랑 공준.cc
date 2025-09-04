#include <stdio.h>

int main() {
    int a = 1, ar, b, c, d=0, j, arr[1000003];
    for(int i=0; i<=1000000; i++){
        arr[i] = i;
    }
    for(int i=2; i<=1000000; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=1000000; j+=i){
            arr[j] = 0;
        }
    }
    scanf("%d", &a);
    for(int i=0; a != 0; i++){
        for(int j=a+1; j<=2*a; j++){
            if(arr[j]==0) continue;
            d++;
        }
        printf("%d\n", d);
        d = 0;
        scanf("%d", &a);
    }
}