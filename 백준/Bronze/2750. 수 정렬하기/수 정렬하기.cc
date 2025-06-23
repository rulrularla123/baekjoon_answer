#include <stdio.h>

int main() {
    int a[1000], b, temp;
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<b; i++){
        for(int j=0; j<b-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<b; i++){
        printf("%d ", a[i]);
    }
}