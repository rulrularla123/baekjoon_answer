#include <iostream>
#include <deque>
#include <string.h>

using namespace std;

int main() {
    int a, b;
    char c[20];
    deque<int> dq;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%s", c);
        if(strcmp("push_front", c)==0){
            scanf("%d\n", &b);
            dq.push_front(b);
        }
        else if(strcmp("push_back", c)==0){
            scanf("%d\n", &b);
            dq.push_back(b);
        }
        else if(strcmp("pop_front", c)==0){
            if(dq.size() > 0){
                printf("%d\n", dq.front());
                dq.pop_front();
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp("pop_back", c)==0){
            if(dq.size() > 0){
                printf("%d\n", dq.back());
                dq.pop_back();
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp("size", c)==0){
            printf("%d\n", dq.size());
        }
        else if(strcmp("empty", c)==0){
            printf("%d\n", dq.empty());
        }
        else if(strcmp("front", c)==0){
            if(dq.size() > 0){
                printf("%d\n", dq.front());
            }
            else{
                printf("-1\n");
            }
        }
        else if(strcmp("back", c)==0){
            if(dq.size() > 0){
                printf("%d\n", dq.back());
            }
            else{
                printf("-1\n");
            }
        }
    }
}