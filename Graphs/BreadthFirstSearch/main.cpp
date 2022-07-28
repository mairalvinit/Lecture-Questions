#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void breadthFirstSearch(vector<int> adj[] , int v , int s){
    bool visited[v+1];
    for(int i=0 ; i<v ;i++){
        visited[i] = false;
    }

    queue<int> q;
    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto i : adj[u]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }

    }

//Second Version 
//No source is given and graph may be disconnected 
void BFS(vector<int> adj[] , int s , bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        // cout<<u<<" ";
        for(auto i : adj[u]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void BFSDist(vector<int> adj[] , int v){
    bool visited[v+1];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    for(int i=0 ; i<v ; i++){
        if(visited[i] == false){
            BFS(adj,i,visited);
        }
    }
}


int numConnectedComponents(vector<int> adj[] , int v){
    bool visited[v+1];
    int count=0;
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    for(int i=0 ; i<v ; i++){
        if(visited[i] == false){
            BFS(adj,i,visited);
            count++;
        }
    }
return count;
}

int main(){
    int v = 9;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);

    addEdge(adj , 4,5);
    addEdge(adj , 4,6);
    addEdge(adj , 5,6);

    addEdge(adj,7,8);

    //Question  : number of connected components in a graph

    cout<<numConnectedComponents(adj,v)<<endl;
    // BFSDist(adj , v );

}