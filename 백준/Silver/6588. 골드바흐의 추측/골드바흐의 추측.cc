#include <stdio.h>

int main() {
    int a = 1, b, c, j, cnt = 0, arr[1000003];
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
    while(a != 0){
        for(int i=a-2; i>0; i--){
            if(arr[i] != 0){
                b = arr[i];
                c = a - b;
                if(arr[c] == 0) continue;
                break;
            }
            cnt = i;
        }
        if(cnt == 1) printf("Goldbach's conjecture is wrong.\n");
        else printf("%d = %d + %d\n", a, c, b);
        cnt = 0;
        scanf("%d", &a);
    }
}