#include <stdio.h>

int main() {
    char a[6];
    int b, c, arr[10000], ac=0, bc=0;
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%s", a);
        if(a[1]=='u'){
            scanf("%d", &c);
            arr[ac] = c;
            ac++;
        }
        else if(a[1]=='o'){
            if(ac-bc > 0){
                printf("%d\n", arr[bc]);
                arr[bc] = 0;
                bc++;
            }
            else{
                printf("-1\n");
            }
        }
        else if(a[1]=='i'){
            printf("%d\n", ac-bc);
        }
        else if(a[1]=='m'){
            if(ac-bc > 0){
                printf("0\n");
            }
            else{
                printf("1\n");
            }
        }
        else if(a[1]=='r'){
            if(ac-bc == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n", arr[bc]);
            }
        }
        else{
            if(ac-bc == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n", arr[ac-1]);
            }
        }
    }
}