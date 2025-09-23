#include <stdio.h>

int main() {
    int a, b, arr[100001], n, m, sum=0, max=0, muhehe;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        scanf("%d", &muhehe);
        sum += muhehe;
        arr[i] = sum;
    }
    for(int i=0; i<b; i++){
        scanf("%d %d", &n, &m);
        if(n-2 < 0) printf("%d\n", arr[m-1]);
        else{
            printf("%d\n", arr[m-1] - arr[n-2]);
        }
    }
}