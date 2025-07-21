#include <stdio.h>

int main() {
    int a, oc=0, od=0;
    char gal[51];
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%s", gal);
        for(int j=0; gal[j] != '\0'; j++){
            if(gal[j] == '(') oc++;
            else if(gal[j] == ')') oc--;
            if(oc < 0){
                od++;
                break;
            }
        }
        if(od!=0 || oc!=0) printf("NO\n");
        else printf("YES\n");
        od = 0;
        oc = 0;
    }
}