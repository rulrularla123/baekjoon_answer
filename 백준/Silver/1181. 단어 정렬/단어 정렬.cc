#include <stdio.h>
#include <string.h>

char a[20001][100];

int le(char e[]){
    int len = 0;
    for(int i=0; e[i] != '\0'; i++){
        len++;
    }
    return len;
}

int idk(char c[], char b[]){
    for(int i=0; c[i] != '\0'; i++){
        if(c[i] > b[i]) return 1;
        else if(c[i] < b[i]) return 0;
    }
    return 2;
}

void ins(int n){
    int j, k, cmp, lenn, kl;
    char temp[100], key[100];
    for(int i=1; i<n; i++){
        strcpy(key, a[i]);
        j = i - 1;
        kl = strlen(key);
        while (j >= 0){
            lenn = strlen(a[j]);
            if (lenn > kl) {
                strcpy(a[j+1], a[j]);
                j--;
            }
            else if (lenn == kl){
                cmp = strcmp(a[j], key);
                if (cmp > 0){
                    strcpy(a[j+1], a[j]);
                    j--;
                }
                else{
                    break;
                }
            }
            else break;
        }
        strcpy(a[j+1], key);
    }
}

int main(void){
    int leng;
    char id[100];
    id[0] = '\0';    
    scanf("%d", &leng);
    for(int i=0; i<leng; i++){
        scanf("%s", a[i]);
    }
    ins(leng);
    for(int i=0; i<leng; i++){
        if(i>0 && strcmp(a[i], a[i-1]) == 0) continue;
        printf("%s\n", a[i]);
    }
}