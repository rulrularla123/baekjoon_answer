#include<stdio.h>
int main() {
    long long int N, K, i, cnt, max = 0, mid, left, right, ans = 0;
    scanf("%lld %lld", &N, &K);
    int arr[100000];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    left = 1;
    right = max;
    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 0;
        for (i = 0; i < N; i++)
            cnt += arr[i] / mid;
        if (cnt >= K) {
            if (ans < mid)
                ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    printf("%lld", ans);
    return 0;
}