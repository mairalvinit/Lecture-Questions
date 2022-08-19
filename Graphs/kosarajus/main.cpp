#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],vector<int> rev[] ,  int u , int v){
    adj[u].push_back(v);
    rev[v].push_back(u);
}

void DFSRec(vector<int> adj[] , int u , vector<bool> &visited , stack<int> &st){
        visited[u] = true;
        for(auto v : adj[u]){
            if(visited[v] == false) DFSRec(adj , v , visited , st);
        }
        st.push(u);
}

void DFSRec2(vector<int> rev[] , int u , vector<bool> &visited2){
    visited2[u] = true;
    cout<<u<<" ";
    for(auto v : rev[u]){
        if(visited2[v] == false){
            DFSRec2(rev, v, visited2);
            }
    }
}

void Kosarajus(vector<int> adj[] , vector<int> rev[] , int v){
    stack<int> st;
    vector<bool> visited(v,false);
    for(int i=0 ; i<v ; i++){
        if(visited[i]==false) DFSRec(adj,i,visited, st);
    }
    vector<bool> visited2(v,false);
    while(!st.empty()){
        int u = st.top();
        st.pop();
        if(visited2[u] == false) {
            cout<<"connected components from "<<u<<" : ";
            DFSRec2(rev,u,visited2);
            cout<<'\n';
            }
    }
}





int main() {
    int v = 5;
    vector<int> adj[v];
    vector<int> rev[v];
    addEdge(adj,rev,0,1);
    addEdge(adj,rev,1,2);
    addEdge(adj,rev,2,0);
    addEdge(adj,rev,1,3);
    addEdge(adj,rev,3,4);
    Kosarajus(adj,rev,v);
}