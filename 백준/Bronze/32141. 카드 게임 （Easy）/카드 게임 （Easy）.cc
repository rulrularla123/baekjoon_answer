#include <stdio.h>

int arr[1000001];

int main() {
    int a, b, c=0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++) scanf("%d", &arr[i]);
    for(int i=0; i < a; i++){
        b -= arr[i];
        c++;
        if(b <= 0) break;
    }
    if(b>0) printf("-1");
    else printf("%d", c);
}