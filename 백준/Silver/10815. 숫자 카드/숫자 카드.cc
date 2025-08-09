#include <stdio.h>

int arr[1000001], temp[1000001], idk[500001];

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

int binary_search(int a[], int x, int start, int end){
    if(start > end){
        return -1;
    }
    int mid = (start + end) / 2;
    if(x == a[mid]){
        return mid;
    }
    else if(x > a[mid]){
        return binary_search(a, x, mid + 1, end);
    }
    else{
        return binary_search(a, x, start, mid - 1);
    }
}

int main() {
    int le, re, r;
    scanf("%d", &re);
    for(int i=0; i<re; i++){
        scanf("%d", &idk[i]);
    }
    scanf("%d", &le);
    for(int i=0; i<le; i++){
        scanf("%d", &arr[i]);
    }
    merge(idk, 0, re);
    for(int i=0; i<le; i++){
        r = binary_search(idk, arr[i], 0, re-1);
        if(r >= 0) printf("1 ");
        else printf("0 ");
    }
}