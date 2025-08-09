#include <stdio.h>

int main() {
    int a, cnt=0, b=0;
    scanf("%d", &a);
    for(b=b; (a - (2*b)) % 5 != 0; b++){
        if(b>a || a-((b+1)*2) < 0){
            cnt++;
            break;
        }
    }
    if(cnt>0){
        printf("-1");
    }
    else{
        printf("%d", b+((a-(b*2))/5));    
    }
}