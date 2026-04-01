#include<iostream>
using namespace std;

int adj[10][10], visited[10], queueArr[10];
int front = -1, rear = -1, n;

void enqueue(int val){
    if(rear == 9) return;
    if(front == -1) front = 0;
    queueArr[++rear] = val;
}

int dequeue(){
    if(front == -1) return -1;
    int val = queueArr[front];
    if(front == rear){
        front = rear = -1;
    } else {
        front++;
    }
    return val;
}

void bfs(int start){
    enqueue(start);
    visited[start] = 1;

    while(front != -1){
        int node = dequeue();
        cout<<node<<" ";

        for(int i=1; i<=n; i++){
            if(adj[node][i] == 1 && visited[i] == 0){
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main(){
    cout<<"Enter number of nodes: ";
    cin>>n;

    cout<<"Enter adjacency matrix:\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>adj[i][j];
        }
    }

    bfs(1); 
}
