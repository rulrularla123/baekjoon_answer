#include <stdio.h>

long long int arr[10003];

int main() {
    int a = 1, ar, b=0, c, d=0, ch=0, j, min=10002;
    for(int i=0; i<=10000; i++){
        arr[i] = i;
    }
    for(int i=2; i<=10000; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=10000; j+=i){
            arr[j] = 0;
        }
    }
    arr[0] = arr[1] = 0;
    scanf("%d\n%d", &a, &ar);
    for(int i=a; i<=ar; i++){
        if(arr[i] != 0){
            b++;
            d+=arr[i];
            min = min > arr[i] ? arr[i] : min;
        }
    }
    if(b==0) printf("-1");
    else{
        printf("%d\n%d", d, min);
    }
}