#include <stdio.h>

int main() {
    int a[30], b;
    for(int i=0; i<30; i++){
        a[i] = i+1;
    }
    for(int i=0; i<28; i++){
        scanf("%d", &b);
        for(int j=0; j<30; j++){
            if(a[j]==b){
                a[j] = 0;
            }
        }
    }
    for(int i=0; i<30; i++){
        if(a[i] != 0){
            printf("%d\n", a[i]);
        }
    }
}