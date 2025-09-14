#include <stdio.h>

int main() {
    int a = 1, b, c, j, cnt = 0, arr[32787], num;
    for(int i=0; i<=32786; i++){
        arr[i] = i;
    }
    for(int i=2; i<=32786; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=32786; j+=i){
            arr[j] = 0;
        }
    }
    scanf("%d", &a);
    for(int l=0; a != 0; l++){
        for(int i=a-2; i>0; i--){
            if(arr[i] != 0){
                b = arr[i];
                c = a - b;
                if(arr[c] == 0 && arr[b]==0) continue;
                if (arr[i] && arr[a-i]) cnt++;
            }
            if(i == a/2) break;
        }
        printf("%d\n", cnt);
        cnt = 0;
        scanf("%d", &a);
    }
}