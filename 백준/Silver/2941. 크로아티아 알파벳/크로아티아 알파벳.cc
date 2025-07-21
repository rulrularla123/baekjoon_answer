#include <stdio.h>
int main(void){
    int count = 0;
    char a[103];
    scanf("%s", a);
    for(int i=0; a[i] != '\0'; i++){
        if(a[i]=='c' && a[i+1] == '=') count += 1, i++;
        else if(a[i] == 'c' && a[i+1] == '-') count += 1, i++;
        else if(a[i] =='d' && a[i+1] == 'z'&& a[i+2] == '=') count += 1, i+=2;
        else if(a[i] == 'd' && a[i+1] == '-') count += 1, i++;
        else if(a[i] == 'l' && a[i+1] == 'j') count += 1, i++;
        else if(a[i] == 'n' && a[i+1] == 'j') count += 1, i++;
        else if(a[i] == 's' && a[i+1] == '=') count += 1, i++;
        else if(a[i] == 'z' && a[i+1] == '=') count += 1, i++;
        else count += 1;
    }
    printf("%d", count);
}