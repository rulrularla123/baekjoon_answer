#include <stdio.h>

int main() {
    char a[200];
    scanf("%s", a);
    for(int i=0; a[i] != '\0'; i++){
        if(a[i] < 97){ a[i] += 97 - 65;}
        else {a[i] -= 97 - 65;}
    }
    printf("%s", a);
}