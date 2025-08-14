#include <stdio.h>

int arr[1000001], temp[1000001];

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
    int ts, len1, len2, ar, r;
    scanf("%d", &ts);
    for(int i=0; i<ts; i++){
        scanf("%d", &len1);
        for(int j=0; j<len1; j++) scanf("%d", &arr[j]);
        merge(arr, 0, len1);
        scanf("%d ", &len2);
        for(int j=0; j<len2; j++){
            scanf("%d", &ar);
            r = binary_search(arr, ar, 0, len1-1);
            if(r == -1) printf("0\n");
            else printf("1\n");
        }
    }
}