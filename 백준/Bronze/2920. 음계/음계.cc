#include <stdio.h>

int main() {
    int a[8], b[8]={1, 2, 3, 4, 5, 6, 7, 8}, c[8]={8, 7, 6, 5, 4, 3, 2, 1}, d=0, e=0;
    for(int i=0; i<8; i++) scanf("%d", &a[i]);
    for(int i=0; i<8; i++){
        if(a[i] != b[i]) d+=1;
    }
    for(int i=0; i<8; i++){
        if(a[i] != c[i]) e+=1;
    }
    if(d==0) printf("ascending");
    else if(e==0) printf("descending");
    else printf("mixed");
}