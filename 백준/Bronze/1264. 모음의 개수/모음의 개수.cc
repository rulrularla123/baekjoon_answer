#include <stdio.h>

int main() {
    int a, b=0;
    char str[260];
    fgets(str, sizeof(str), stdin);
    while(str[0] != '#'){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                b++;   
            }
        }
        printf("%d\n", b);
        fgets(str, sizeof(str), stdin);
        b = 0;
    }
}