#include <stdio.h>

int main() {
    int a[26], c=0;
    char b[100], d;
    scanf("%s", b);
    for(int i=0; i<26; i++){
        a[i] = -1;
    }
    for(int i=0; b[i] != '\0'; i++){
        c = b[i] - 'a';
        if(a[c] == -1){
            a[c] += i+1;
        }
        c = 0;
    }
    for(int i=0; i<26; i++){
        printf("%d ", a[i]);
    }
    return 0;
}