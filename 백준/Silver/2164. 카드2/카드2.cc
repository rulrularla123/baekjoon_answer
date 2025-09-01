#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k, in, d;
    scanf("%d", &n);
    queue<int> qu;
    for(int i=1; i<=n; i++){
        qu.push(i);
    }
    for(int i=0; qu.size() != 1; i++){
        for(int j=0; j<2 && qu.size() != 1; j++){
            if(j==0) qu.pop();
            else if(j==1){
                in = qu.front();
                qu.pop();
                qu.push(in);
            }
        }
    }
    printf("%d", qu.front());
}