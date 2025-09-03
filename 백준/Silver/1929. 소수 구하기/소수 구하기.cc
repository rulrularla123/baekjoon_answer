#include <stdio.h>

int main() {
    int a, b, j, cnt = 0, arr[1000003];
    scanf("%d %d", &b, &a);
    for(int i=0; i<=a; i++){
        arr[i] = i;
    }
    for(int i=2; i<=a; i++){
        if(arr[i] != 0){
            for(j=i*2; j<=a; j+=i){
                arr[j] = 0;
            }
        }
    }
    if(b==1) b++;
    for(int i=b; i<=a; i++){
        if(arr[i] != 0){
            printf("%d\n", arr[i]);
        }
    }
}