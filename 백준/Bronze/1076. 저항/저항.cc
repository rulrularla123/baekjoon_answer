#include <stdio.h>
#include <string.h>

int main() {
    long long int a1, a2, a3 = 1;
    char a[10], b[10], c[10], color[10][10] = {
    "black", "brown", "red", "orange", "yellow",
    "green", "blue", "violet", "grey", "white"
};
    scanf("%s %s %s", a, b, c);
    for(int i=0; i<10; i++){
        if(strcmp(a, color[i])==0){
            a1 = i;
        }
        if(strcmp(b, color[i])==0){
            a2 = i;
        }
        if(strcmp(c, color[i])==0){
            for(int j=0; j<i && i>0; j++){
                a3 *= 10;
            }
        }
    }
    printf("%lld", (a1*10 + a2)*a3);
}