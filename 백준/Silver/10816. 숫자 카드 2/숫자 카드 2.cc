#include <stdio.h>

int arr[1000001], temp[1000001], idk[500001], final[500001]={0, };

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

int lower_bound(int a[], int x, int start, int end) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    if (a[mid] == x) {
        int left_pos = lower_bound(a, x, start, mid - 1);
        return (left_pos != -1) ? left_pos : mid;
    }
    else if (a[mid] > x) {
        return lower_bound(a, x, start, mid - 1);
    }
    else {
        return lower_bound(a, x, mid + 1, end);
    }
}

int upper_bound(int a[], int x, int start, int end) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    if (a[mid] == x) {
        int right_pos = upper_bound(a, x, mid + 1, end);
        return (right_pos != -1) ? right_pos : mid;
    }
    else if (a[mid] > x) {
        return upper_bound(a, x, start, mid - 1);
    }
    else {
        return upper_bound(a, x, mid + 1, end);
    }
}

int main() {
    int le, re, r, d, st, en;
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
        st = lower_bound(idk, arr[i], 0, re-1);
        en = upper_bound(idk, arr[i], 0, re-1);
        if(st!=-1 && en!=-1){
            final[i] += en - st + 1;
        }
    }
    for(int i=0; i<le; i++){
        printf("%d ", final[i]);
    }
}