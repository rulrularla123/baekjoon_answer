#include <stdio.h>

int main() {
    int a, b, c, j, cnt = 0, arr[1001];
    while (scanf("%d %d", &a, &b) != EOF) {
        for(int i=0; i<=1000; i++){
            arr[i] = i;
        }
        for(int i=2; i<=a; i++){
            if(!arr[i]) continue;
            for(j=i; j<=a; j+=i){
                if(arr[j] != 0) cnt++;
                if(cnt == b && arr[j] != 0){
                    printf("%d\n", arr[j]);
                    goto done;
                }
                arr[j] = 0;
            }
        }
        done:;
        cnt = 0;
    }
}