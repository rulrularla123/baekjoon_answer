#include <stdio.h>

int main() {
    int a, b, c[100000]={0, }, count=0, c2=0, sum=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        if(b != 0){
            c[count] = b;
            count += 1;
        }
        else{
            count-=1;
            c[count] = 0;
        }
    }
    for(int i=0; i<count; i++){
        sum+=c[i];
    }
    printf("%d", sum);
}