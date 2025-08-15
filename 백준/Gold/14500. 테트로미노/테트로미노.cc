#include <stdio.h>

int main() {
    int arr[501][501], x, y, max=0, a=0, b=0, sum=0, c=1;
    scanf("%d %d", &x, &y);
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=1; i<=x*y; i++){
        if(b+1 < y && a+1 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a+1][b] + arr[a+1][b+1];
            if(sum > max) max = sum;
        }
        
        if(b+3 < y){
            sum = arr[a][b] + arr[a][b+1] + arr[a][b+2] + arr[a][b+3];
            if(sum > max) max = sum;
        }
        if(a+3 < x){
            sum = arr[a][b] + arr[a+1][b] + arr[a+2][b] + arr[a+3][b];
            if(sum > max) max = sum;
        }
        
        if(b+2 < y && a+1 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a][b+2] + arr[a+1][b];
            if(sum > max) max = sum;
        }
        if(b+2 < y && a+1 < x){
            sum = arr[a+1][b] + arr[a+1][b+1] + arr[a+1][b+2] + arr[a][b+2];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b] + arr[a+1][b] + arr[a+2][b] + arr[a+2][b+1];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a+1][b+1] + arr[a+2][b+1];
            if(sum > max) max = sum;
        }

        if(b+2 < y && a+1 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a][b+2] + arr[a+1][b+2];
            if(sum > max) max = sum;
        }
        if(b+2 < y && a+1 < x){
            sum = arr[a+1][b] + arr[a+1][b+1] + arr[a+1][b+2] + arr[a][b];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b] + arr[a+1][b] + arr[a+2][b] + arr[a][b+1];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b+1] + arr[a+1][b+1] + arr[a+2][b+1] + arr[a+2][b];
            if(sum > max) max = sum;
        }
        
        if(b+2 < y && a+1 < x){
            sum = arr[a+1][b] + arr[a+1][b+1] + arr[a][b+1] + arr[a][b+2];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b] + arr[a+1][b] + arr[a+1][b+1] + arr[a+2][b+1];
            if(sum > max) max = sum;
        }

        if(b+2 < y && a+1 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a+1][b+1] + arr[a+1][b+2];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b+1] + arr[a+1][b+1] + arr[a+1][b] + arr[a+2][b];
            if(sum > max) max = sum;
        }
        
        if(b+2 < y && a+1 < x){
            sum = arr[a][b] + arr[a][b+1] + arr[a][b+2] + arr[a+1][b+1];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b+1] + arr[a+1][b+1] + arr[a+1][b] + arr[a+2][b+1];
            if(sum > max) max = sum;
        }
        if(b+1 < y && a+2 < x){
            sum = arr[a][b] + arr[a+1][b] + arr[a+1][b+1] + arr[a+2][b];
            if(sum > max) max = sum;
        }
        if(b+2 < y && a+1 < x){
            sum = arr[a+1][b] + arr[a+1][b+1] + arr[a+1][b+2] + arr[a][b+1];
            if(sum > max) max = sum;
        }
        b++;
        if(i==y*c) a++, c++, b=0;
    }
    
    printf("%d\n", max);
}