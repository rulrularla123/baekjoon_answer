#include <stdio.h>

int main() {
    int a = 1, b, c, j, cnt = 0, arr[32003], num;
    for(int i=0; i<=32000; i++){
        arr[i] = i;
    }
    for(int i=2; i<=32000; i++){
        if(!arr[i]) continue;
        for(j=i*2; j<=32000; j+=i){
            arr[j] = 0;
        }
    }
    scanf("%d", &num);
    for(int l=0; l<num; l++){
        scanf("%d", &a);
        for(int i=a-2; i>0; i--){
            if(arr[i] != 0){
                b = arr[i];
                c = a - b;
                if(arr[c] == 0 && arr[b]==0) continue;
                if (arr[i] && arr[a-i]) cnt++;
            }
            if(i == a/2) break;
        }
        printf("%d has %d representation(s)\n", a, cnt);
        for(int i=a-2; i>0; i--){
            if(arr[i] != 0){
                b = arr[i];
                c = a - b;
                if(arr[c] == 0 && arr[b]==0) continue;
                if (arr[i] && arr[a-i]) printf("%d+%d\n", c, b);
            }
            if(i == a/2) break;
        }
        printf("\n");
        cnt = 0;
    }
}