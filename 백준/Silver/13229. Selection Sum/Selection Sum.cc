#include <stdio.h>

int main() {
    int a, b, arr[100001], n, m, sum=0, max=0, muhehe;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &muhehe);
        sum += muhehe;
        arr[i] = sum;
    }
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        scanf("%d %d", &n, &m);
        if(n==0) printf("%d\n", arr[m]);
        else{
            printf("%d\n", arr[m] - arr[n-1]);
        }
    }
}