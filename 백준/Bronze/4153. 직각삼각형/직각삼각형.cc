#include <stdio.h>

int main(void) {
    int w, h, hy, temp;
    while(1){
        scanf("%d %d %d", &w, &h, &hy);
        if(h>w){
            temp = w;
            w = h;
            h = temp;
        }
        if(w>hy){
            temp = hy;
            hy = w;
            w = temp;
        }
        if(w==0 && h==0 && hy == 0){
            break;
        }
        else if(w*w + h*h == hy * hy){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
}