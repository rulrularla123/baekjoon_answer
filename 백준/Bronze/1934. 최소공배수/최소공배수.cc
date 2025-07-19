#include <stdio.h>

int main() {
    int a, b, c, temp;
    scanf("%d", &c);
    for(int i=0; i<c; i++){
        scanf("%d %d", &a, &b);
        if(b > a){
            temp = a;
            a = b;
            b = temp;
        }
        for(int j=b; j>0; j--){
            if(b%j==0 && a%j==0){
                printf("%d\n", a*b/j);
                break;
            }
        }
    }
}