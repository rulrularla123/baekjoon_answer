#include <stdio.h>

int main() {
    int a, b, c[500][500]={0, }, d, count_one=0, count_zero=0, count_end = 0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++){
        scanf("%d", &d);
        for(int j=0; j<d && j<a; j++){
            if(j<d){
                c[a-j-1][i] = 1;
            }
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(c[i][j] == 0 && count_one == 1) count_zero += 1;
            if(c[i][j] == 1) count_one += 1;
            if(count_one == 2){
                count_end += count_zero;
                count_one = 1;
                count_zero = 0;
            }
            if(count_one > 1 && count_zero < 1){
                count_one=1;
            }
        }
        count_one = 0;
        count_zero = 0;
    }
    printf("%d", count_end);
}