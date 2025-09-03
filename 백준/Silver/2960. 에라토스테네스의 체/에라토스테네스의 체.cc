#include <stdio.h>

int main() {
    int a, b, j, cnt = 0, arr[500003];
    scanf("%d %d", &a, &b);
    for(int i=0; i<=a; i++){
        arr[i] = i;
    }
    for(int i=2; i<=a; i++){
        if(arr[i] != 0){
            for(j=i; j<=a; j+=i){
                if(arr[j] != 0){
                    cnt++;
                }
                if(cnt == b){
                    printf("%d", arr[j]);
                    break;
                }
                arr[j] = 0;
            }
        }
    }
}