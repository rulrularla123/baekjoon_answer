#include <stdio.h>

int main() {
    int a, b;
    for(int i=0; i<6; i++){
        scanf("%d", &a);
        if(i == 1 || i == 0){
            if(a > 1){
                b = 1 - a;
                a += b;
            }
            else if(a < 1){
                for(b=b;a+b!=1;b++);
            }
        }
        else if(i >= 2 && i <= 4){
            if(a > 2){
                b = 2 - a;
                a += b;
            }
            else if(a < 2){
                for(b=b;a+b!=2;b++);
            }
        }
        else{
            if(a > 8){
                b = 8 - a;
                a += b;
            }
            else if(a < 8){
                for(b=b;a+b!=8;b++);
            }
        }
        printf("%d ", b);
        b = 0;
    }
}