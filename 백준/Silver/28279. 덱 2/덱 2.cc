#include <iostream>
#include <deque>
#include <string.h>

using namespace std;

int main() {
    int a, b, c;
    deque<int> dq;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &c);
        if(c==1){
            scanf("%d\n", &b);
            dq.push_front(b);
        }
        else if(c==2){
            scanf("%d\n", &b);
            dq.push_back(b);
        }
        else if(c==3){
            if(dq.size() > 0){
                printf("%d\n", dq.front());
                dq.pop_front();
            }
            else{
                printf("-1\n");
            }
        }
        else if(c==4){
            if(dq.size() > 0){
                printf("%d\n", dq.back());
                dq.pop_back();
            }
            else{
                printf("-1\n");
            }
        }
        else if(c==5){
            printf("%d\n", dq.size());
        }
        else if(c==6){
            printf("%d\n", dq.empty());
        }
        else if(c==7){
            if(dq.size() > 0){
                printf("%d\n", dq.front());
            }
            else{
                printf("-1\n");
            }
        }
        else if(c==8){
            if(dq.size() > 0){
                printf("%d\n", dq.back());
            }
            else{
                printf("-1\n");
            }
        }
    }
}