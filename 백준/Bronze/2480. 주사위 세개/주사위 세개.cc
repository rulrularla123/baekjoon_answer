#include <stdio.h>

int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && a==c){
        printf("%d", 10000+a*1000);
    }
    else if(a==b || b==c || a==c){
        if(a==b){
            printf("%d", 1000+a*100);
        }
        else if(b==c){
            printf("%d", 1000+b*100);
        }
        else{
            printf("%d", 1000+c*100);
        }
    }
    else{
        if(a<b){
            a = b;
        }
        if(a<c){
            a = c;
        }
        printf("%d", a*100);
    }
}