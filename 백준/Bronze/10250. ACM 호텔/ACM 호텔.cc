#include <stdio.h>

int main(void) {
    int w, h, p, d, j=1;
    scanf("%d", &d);
    for(int i = 0; i<d; i++){
        scanf("%d %d %d", &h, &w, &p);
        if(p>h){
            while(1){
                if(p-h*j<=h){
                    break;
                }
            j++;
            }
            printf("%d%02d\n", p-h*j, j+1);
            j=0;
        }
        else{
            printf("%d%02d\n", p, j);
        }
        j=1;
    }
}