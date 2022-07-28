#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSRec(vector<int> adj[] , int s , bool visited[]){
    visited[s] = true;
    // cout<<s<<" ";
    for(auto v : adj[s]){
        if(visited[v] == false)DFSRec(adj,v,visited);
    }
}

void DFS(vector<int> adj[] , int v , int s){
    bool visited[v];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    DFSRec(adj , s , visited);

}

//Disconnected Graphs
//With connected components
int DFSDist(vector<int> adj[] , int v){
    bool visited[v];
    int count=0;
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
    }
    for(int i=0 ; i<v ; i++){
        if(visited[i] == false) {
            DFSRec(adj , i , visited);
            count++;}
    }
return count;
}

int main(){
    int v = 8;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,1,4);
    addEdge(adj,3,4);
    addEdge(adj,5,6);
    cout<<DFSDist(adj,v);
}