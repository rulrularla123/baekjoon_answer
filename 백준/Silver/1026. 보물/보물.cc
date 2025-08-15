#include <stdio.h>

int arr1[1000001], temp1[1000001];

void merge1(int a[], int st, int en){
     if (en - st <= 1) return;
    int mid = (st + en) / 2;
    merge1(a, st, mid);
    merge1(a, mid, en);
    int i = st, j = mid, k = st;
    while(i < mid && j < en){
        if (a[i] > a[j]) temp1[k++] = a[i++];
        else temp1[k++] = a[j++];
    }
    while (i < mid) temp1[k++] = a[i++];
    while (j < en) temp1[k++] = a[j++];
    for (int t = st; t < en; t++) a[t] = temp1[t];
}

int arr2[1000001], temp2[1000001];

void merge2(int a[], int st, int en){
     if (en - st <= 1) return;
    int mid = (st + en) / 2;
    merge2(a, st, mid);
    merge2(a, mid, en);
    int i = st, j = mid, k = st;
    while(i < mid && j < en){
        if (a[i] < a[j]) temp2[k++] = a[i++];
        else temp2[k++] = a[j++];
    }
    while (i < mid) temp2[k++] = a[i++];
    while (j < en) temp2[k++] = a[j++];
    for (int t = st; t < en; t++) a[t] = temp2[t];
}

int main() {
    int a, re=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++) scanf("%d", &arr1[i]);
    merge1(arr1, 0, a);
    for(int i=0; i<a; i++) scanf("%d", &arr2[i]);
    merge2(arr2, 0, a);
    for(int i=0; i<a; i++){
        re += arr1[i] * arr2[i];
    }
    printf("%d", re);
}