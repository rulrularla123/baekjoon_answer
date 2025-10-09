#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* graph[MAX];
int visited[MAX];
int n;

void addEdge(int src, int dest) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = NULL;

    if (graph[src] == NULL) {
        graph[src] = newNode;
    } 
    else{
        Node* temp = graph[src];
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }

    newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = src;
    newNode->next = NULL;
    if (graph[dest] == NULL) {
        graph[dest] = newNode;
    }
    else{
        Node* temp = graph[dest];
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

void dfs(int v){
    visited[v] = 1;
    printf("%d ", v);
    int arr[MAX], cnt = 0;
    Node* temp = graph[v];
    while (temp != NULL){
        arr[cnt++] = temp->vertex;
        temp = temp->next;
    }

    for (int i = 0; i < cnt - 1; i++){
        for (int j = i + 1; j < cnt; j++){
            if (arr[i] > arr[j]){
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
            }
        }
    }
    for (int i = 0; i < cnt; i++){
        if (!visited[arr[i]]) dfs(arr[i]);
    }
}

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int v) { queue[++rear] = v; }
int dequeue() { return queue[++front]; }
int isEmpty() { return front == rear; }

void bfs(int start) {
    enqueue(start);
    visited[start] = 1;
    while (!isEmpty()) {
        int v = dequeue();
        printf("%d ", v);
        int arr[MAX], cnt = 0;
        Node* temp = graph[v];
        while (temp != NULL){
            arr[cnt++] = temp->vertex;
            temp = temp->next;
        }
        for (int i = 0; i < cnt - 1; i++){
            for (int j = i + 1; j < cnt; j++){
                if (arr[i] > arr[j]) {
                    int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                }
            }
        }
        for (int i = 0; i < cnt; i++){
            if (!visited[arr[i]]){
                enqueue(arr[i]);
                visited[arr[i]] = 1;
            }
        }
    }
}

int main(){
    int e, p;
    scanf("%d %d %d", &n, &e, &p);

    for (int i = 0; i < e; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        addEdge(a, b);
    }

    for (int i = 1; i <= n; i++) visited[i] = 0;
    dfs(p);
    printf("\n");

    for (int i = 1; i <= n; i++) visited[i] = 0;
    front = rear = -1;
    bfs(p);
    printf("\n");
}