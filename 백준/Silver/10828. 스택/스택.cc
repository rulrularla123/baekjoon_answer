#include <stdio.h>

int main() {
    int a, b, c[10000]={0,}, d=0;
    char type[6];
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%s", type);
        if(type[1] == 'u'){
            scanf("%d", &b);
            c[d] = b;
            d += 1;
        }
        if(type[0]=='t'){
            if(d==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", c[d-1]);
            }
        }
        if(type[1]=='i'){
            printf("%d\n", d);
        }
        if(type[1]=='m'){
            if(d==0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        if(type[1] =='o' && type[0] == 'p'){
            if(d==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", c[d-1]);
                d -= 1;
            }
        }
    }
}