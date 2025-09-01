#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k, in, d;
    char s[8];
    scanf("%d", &n);
    queue<int> qu;
    for(int i=0; i<n; i++){
        scanf("%s", s);
        if(s[1] == 'u'){
            scanf("%d", &k);
            qu.push(k);
        }
        else if(s[1] == 'o'){
            if(qu.size() != 0){
                printf("%d\n", qu.front());
                qu.pop();
            }
            else{
                printf("-1\n");
            }
        }
        else if(s[1] == 'i'){
            printf("%d\n", qu.size());
        }
        else if(s[1] == 'm'){
            printf("%d\n", qu.empty());
        }
        else if(s[1] == 'r'){
            if(qu.size() != 0){
                printf("%d\n", qu.front());
            }
            else{
                printf("-1\n");
            }
        }
        else if(s[1] == 'a'){
            if(qu.size() != 0){
                printf("%d\n", qu.back());
            }
            else{
                printf("-1\n");
            }
        }
    }
}