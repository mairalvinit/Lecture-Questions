#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
}

void DFSRec(vector<int> adj[] , stack<int> &st , bool visited[] , int s){
    visited[s] = true;
    for(auto i : adj[s]){
        if(visited[i] == false) DFSRec(adj, st, visited , i);
    }
    st.push(s);
}

void DFS(vector<int> adj[] , int V){
    stack<int> st;
    bool visited[V];
    for(int i=0 ; i<V ; i++)visited[i] = false;
    for(int i=0 ; i<V ; i++){
        if(visited[i] == false){
            DFSRec(adj , st , visited , i );
        }
    }
    while(st.empty() == false){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,3);
    addEdge(adj,3,4);
    addEdge(adj,2,3);
    addEdge(adj,2,4);

    DFS(adj , V);
}