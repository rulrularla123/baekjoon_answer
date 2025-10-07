#include <stdio.h>

int main() {
    int a, sum = 300;
    for(int i=0; i<4; i++){
        scanf("%d", &a);
        sum += a;
    }
    printf(sum <= 1800 ? "Yes" : "No");
}