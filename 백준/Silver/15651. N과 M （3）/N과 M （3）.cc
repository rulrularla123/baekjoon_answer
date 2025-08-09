#include <stdio.h>

int n, m, a[100], v[100], cnt=0;

void back(int d) {
    if(d == m) {
        for(int i=0; i<m; i++) printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++) {
        if(!v[i]) {
            a[d] = i;
            back(d+1);
            v[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    back(0);
}