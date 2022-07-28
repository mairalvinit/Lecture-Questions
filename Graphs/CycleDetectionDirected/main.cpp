#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
}

bool DFSRec(vector<int> adj[] , int s , bool visited[] , bool reSt[]){
    visited[s] = true;
    reSt[s] = true;
    for(auto i : adj[s]){
        if(visited[i] == false && DFSRec(adj, i, visited, reSt) ==true) return true;
        else if(reSt[i] == true) return true;
    }
    reSt[s] = false;
    return false;
}


bool DFS(vector<int> adj[] , int v){
    bool visited[v] , reSt[v];
    for(int i=0 ; i<v ; i++){
        visited[i] = false;
        reSt[i] = false;
    }
    for(int i=0 ; i<v ; i++){
        if(visited[i]== false){
            if(DFSRec(adj,i,visited,reSt) == true) return true;
        }
    }
return false;
}

int main(){
    int v = 6;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,2,1);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,4,5);
    // addEdge(adj,5,3);
    cout<<boolalpha;
    cout<<DFS(adj,v);
}