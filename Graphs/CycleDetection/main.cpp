#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//Depth First Search
bool DFSRec(vector<int> adj[] , int s , bool visited[] , int parent){
    visited[s] = true;
    for(auto i : adj[s]){
        if(visited[i] == false) {
            if(DFSRec(adj, i, visited , s) == true) return true;}
        else if(i != parent) return true;
    }
    return false;

}

bool DFS(vector<int> adj[] , int v){
    bool visited[v] ;
    for(int i=0 ; i<v ; i++)visited[i] = false;
    for(int i=0 ; i<v ; i++){
        if(visited[i] == false){
            if(DFSRec(adj,i, visited, -1) == true) return true;
        }
    }
return false;
}

//BFS based Solution 
bool BFSDetect(vector<int> adj[] , int v , int s){
    bool visited[v];
    vector<int> parent(v,-1);
    for(int i=0 ; i<v ; i++)visited[i] = false;
    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){ 
        int u = q.front();
        q.pop();
        for(auto i : adj[u]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
                parent[i] = u;
            }else if( parent[u] != i){ 
                return true;
            }
        }
    }
    return false;
}


int main(){
    int v = 6;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,4,5);
    addEdge(adj,2,3);
    // cout<<boolalpha;
    cout<<BFSDetect(adj , v,0);
}