#include <stdio.h>

int main() {
    int a[9], b, c = 0;
    for(int i=0; i<9; i++){
        scanf("%d", &a[i]);
        if (c < a[i]){
            c = a[i];
            b = i + 1;
        }
    }
    printf("%d\n%d", c, b);
}