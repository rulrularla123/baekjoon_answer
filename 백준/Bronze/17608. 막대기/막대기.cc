#include <stdio.h>
#include <stack>

int main() {
    int a, b, cnt=0, d=0, st[100001];
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &st[i]);
    }
    for(int i=a-1; i>=0; i--){
        if(st[i] > d){
            cnt++;
            d = st[i];
        }
    }
    printf("%d", cnt);
}