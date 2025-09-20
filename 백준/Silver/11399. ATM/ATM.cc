#include <stdio.h>

int arr[1000001], temp[1000001], cnt=0, cnt1=0;

void merge(int a[], int st, int en){
     if (en - st <= 1) return;
    int mid = (st + en) / 2;
    merge(a, st, mid);
    merge(a, mid, en);
    int i = st, j = mid, k = st;
    while(i < mid && j < en){
        if (a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i < mid) temp[k++] = a[i++];
    while (j < en) temp[k++] = a[j++];
    for (int t = st; t < en; t++) a[t] = temp[t];
}

int main() {
    int a, i=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    merge(arr, 0, a);
    for(int i=0; i<a; i++){
        cnt+=arr[i]+cnt1;
        cnt1+=arr[i];
        arr[i] = 0;
    }
    printf("%d", cnt);
}