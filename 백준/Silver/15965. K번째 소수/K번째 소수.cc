#include <stdio.h>

long long int arr[10000003];

int main() {
    int a, b, j, cnt = 0;
    scanf("%d", &a);
    for(int i=0; i<=10000001; i++){
        arr[i] = i;
    }
    for(int i=2; i<=10000000; i++){
        if(arr[i] != 0){
            for(j=i*2; j<=10000000; j+=i){
                arr[j] = 0;
            }
        }
    }
    if(b==1) b++;
    for(int i=2; cnt != a; i++){
        if(arr[i] != 0){
            cnt++;
        }
        if(cnt == a){
            printf("%lld", arr[i]);
        }
    }
}