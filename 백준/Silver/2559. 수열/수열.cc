#include <stdio.h>

int main() {
    int a, b, arr[100001], n, m, sum=0, max=-1000000, muhehe;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        scanf("%d", &muhehe);
        sum += muhehe;
        arr[i] = sum;
    }
    for (int i = -1; i <= a-b-1; i++) {
        int cur;
        if (i < 0) cur = arr[b-1];
        else cur = arr[i+b] - arr[i];
        if (cur > max) max = cur;
    }
    printf("%d", max);
}