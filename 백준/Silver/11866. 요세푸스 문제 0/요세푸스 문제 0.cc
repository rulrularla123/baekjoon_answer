#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k, in, d;
    scanf("%d %d", &n, &k);
    queue<int> qu;
    for(int i=1; i<=n; i++){
        qu.push(i);
    }
    printf("<");
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            if(qu.size() == 1){
                printf("%d", qu.front());
                break;
            }
            else if(k-1 == j){
                printf("%d, ", qu.front());
                qu.pop();
            }
            else{
                in = qu.front();
                qu.pop();
                qu.push(in);
            }
        }
    }
    printf(">");
}