#include <stdio.h>
#include <string.h>

int main() {
    int b, c, d, math=0, mith=0, mam=0, mim=0, may=0, miy=0, e;
    char a[16], man[16], min[16];
    scanf("%d", &e);
    scanf("%s %d %d %d", a, &b, &c, &d);
    may = d;
    mam = c;
    math = b;
    strcpy(man, a);
    miy = d;
    mim = c;
    mith = b;
    strcpy(min, a);
    for(int i=0; i<e; i++){
        scanf("%s %d %d %d", a, &b, &c, &d);
        if(d < may){
            may = d;
            mam = c;
            math = b;
            strcpy(man, a);
        }
        else if(d==may && c < mam){
            may = d;
            mam = c;
            math = b;
            strcpy(man, a);
        }
        else if(d==may && c == mam && b < math){
            may = d;
            mam = c;
            math = b;
            strcpy(man, a);
        }
        if(d > miy){
            miy = d;
            mim = c;
            mith = b;
            strcpy(min, a);
        }
        else if(d==miy && c > mim){
            miy = d;
            mim = c;
            mith = b;
            strcpy(min, a);
        }
        else if(d==miy && c == mim && b > mith){
            miy = d;
            mim = c;
            mith = b;
            strcpy(min, a);
        }
    }
    printf("%s\n%s", min, man);
}