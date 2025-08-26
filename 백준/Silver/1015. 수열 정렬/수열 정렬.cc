#include <stdio.h>

int arr[1000001], temp[1000001], arr2[1000001], temp2[1000001];

void merge(int a[], int b[], int st, int en){
     if (en - st <= 1) return;
    int mid = (st + en) / 2;
    merge(a, b, st, mid);
    merge(a, b, mid, en);
    int i = st, j = mid, k = st;
    while(i < mid && j < en){
        if (a[i] <= a[j]){
            temp[k] = a[i];
            temp2[k++] = b[i++];
        }
        else{
            temp[k] = a[j];
            temp2[k++] = b[j++];
        }
    }
    while (i < mid){
        temp[k] = a[i];
        temp2[k++] = b[i++];
    }
    while (j < en){
        temp[k] = a[j];
        temp2[k++] = b[j++];
    }
    for (int t = st; t < en; t++){
        a[t] = temp[t];
        b[t] = temp2[t];
    }
}

void merge2(int a[], int b[], int st, int en){
     if (en - st <= 1) return;
    int mid = (st + en) / 2;
    merge2(a, b, st, mid);
    merge2(a, b, mid, en);
    int i = st, j = mid, k = st;
    while(i < mid && j < en){
        if (a[i] <= a[j]){
            temp2[k] = a[i];
            temp[k++] = b[i++];
        }
        else{
            temp2[k] = a[j];
            temp[k++] = b[j++];
        }
    }
    while (i < mid){
        temp2[k] = a[i];
        temp[k++] = b[i++];
    }
    while (j < en){
        temp2[k] = a[j];
        temp[k++] = b[j++];
    }
    for (int t = st; t < en; t++){
        a[t] = temp2[t];
        b[t] = temp[t];
    }
}

int main() {
    int a, i=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
        arr2[i] = i;
    }
    merge(arr, arr2, 0, a);
    for(int i=0; i<a; i++){
        arr[i] = i;
    }
    merge2(arr2, arr, 0, a);
    for(int i=0; i<a; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}