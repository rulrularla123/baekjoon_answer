#include <stdio.h>
int main(void){
    int min, temp;
    char be[13];
    scanf("%s", be);
    for(int i=0; (int)be[i] != '\0'; i++){
        min = i;
        for(int j=i; (int)be[j] != '\0'; j++){
            if((int)be[min] < (int)be[j]){
                min = j;
            }
        }
        temp = be[i];
        be[i] = be[min];
        be[min] = temp;
    }
    printf("%s", be);
}