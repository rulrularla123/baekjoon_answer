#include <stdio.h>

int main() {
    int a[10000], b, c, temp;
    scanf("%d %d", &b, &c);
    for(int i=0; i<b; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<b; i++){
        for(int j=0; j<b; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d", a[b-c]);
}