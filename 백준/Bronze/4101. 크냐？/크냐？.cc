#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a ,&b);
    for(int i=0; a!=0 && b!=0; i++){
        printf(a > b ? "Yes\n" : "No\n");
        scanf("%d %d", &a, &b);
    }
}