#include <stdio.h>

int a[1000003] = {-1};

int main() {
    int d, b, c, count=0;
    scanf("%d", &d);
    for(int i=0; i<d; i++){
        scanf("%d", &b);
        switch(b){
            case 1:
                scanf("%d", &c);
                a[count] = c;
                count++;
                break;
            case 2:
                if(count > 0){
                    printf("%d\n", a[count-1]);
                    a[count-1] = -1;
                    count--;
                }
                else{
                    printf("%d\n", a[count]);
                }
                break;
            case 3:
                printf("%d\n", count);
                break;
            case 4:
                if(count > 0){
                    printf("0\n");
                }
                else{
                    printf("1\n");
                }
                break;
            case 5:
                if(count > 0){
                    printf("%d\n", a[count-1]);
                }
                else{
                    printf("-1\n");
                }
                break;
        }
    }
}