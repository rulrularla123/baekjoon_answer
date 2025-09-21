#include <stdio.h>

int main() {
    int a, b, cnt1=0, cnt2=0;
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);
    for(int i=0; s1[i]!='\0' || s2[i]!='\0'; i++){
        if(s1[i] == 'h' && s2[i] == 'h'){
            printf("go");
            break;
        }
        else if(s2[i] == '\0'){
            printf("go");
            break;
        }
        else if(s1[i] == '\0'){
            printf("no");
            break;
        }
    }
}