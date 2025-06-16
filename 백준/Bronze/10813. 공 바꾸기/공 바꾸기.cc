#include <stdio.h>

int main() {
    int a[100] = {0,}, leng, put, b, c, temp;
    scanf("%d %d", &leng, &put);
    for(int i=0; i<leng; i++){
        a[i] = i+1;
    }
    for(int i=0; i<put; i++){
        scanf("%d %d", &b, &c);
        temp = a[b-1];
        a[b-1] = a[c-1];
        a[c-1] = temp;
    }
    for(int i = 0; i<leng; i++){
        printf("%d ", a[i]);
    }
}