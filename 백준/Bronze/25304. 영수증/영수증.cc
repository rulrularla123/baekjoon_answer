#include <stdio.h>

int main() {
    int a, b, c, d, e=0;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i<b; i++){
        scanf("%d %d", &c, &d);
        e += c*d;
    }
    if(a==e){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}