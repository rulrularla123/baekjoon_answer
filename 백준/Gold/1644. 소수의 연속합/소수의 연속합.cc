#include <stdio.h>

long long int arr[4000003];

int main() {
    int a = 1, ar, b=0, c, d=0, ch=0, j;
    for(int i=0; i<=4000000; i++){
        arr[i] = i;
    }
    for(int i=2; i<=4000000; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=4000000; j+=i){
            arr[j] = 0;
        }
    }
    arr[0] = arr[1] = 0;
    scanf("%d", &ar);
    for(int i=ar; i>0; i--){
        if(arr[i] == 0) continue;
        for(int j=i; d<=ar && j>=2; j--){
            d += arr[j];
            if(d == ar){
                ch += 1;
                break;
            }
        }
        d=0;
    }
    printf("%d", ch);
}