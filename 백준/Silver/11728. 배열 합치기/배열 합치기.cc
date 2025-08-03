#include <stdio.h>

int b1[1000000], b2[1000000];

int main() {
    int a, b, s1=0, s2=0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        scanf("%d", &b1[i]);
    }
    for(int i=0; i<b; i++){
        scanf("%d", &b2[i]);
    }
    for(int i=0; i<a+b; i++){
        if(b1[s1] >= b2[s2] && s2 != b){
            printf("%d ", b2[s2]);
            s2++;
        }
        else if(b1[s1] < b2[s2] && s1 != a){
            printf("%d ", b1[s1]);
            s1++;
        }
    }
    if(a > s1){
        for(int i=s1; i<a; i++){
            printf("%d ", b1[i]);
        }
    }
    else if(b > s2){
        for(int i=s2; i<b; i++){
            printf("%d ", b2[i]);
        }
    }
}