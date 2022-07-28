#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void findShortest(vector<int> adj[] , int v, int s){
    int dist[v];
    bool visited[v];
    for(int i=0 ; i<v ; i++){
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    dist[s] = 0;
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        for(auto i : adj[u]){
            if(visited[i] == false){
                dist[i] = dist[u]+1;
                visited[i] = true;
                q.push(i);
            }
        }
    }
   for(auto i : dist)cout<<i<<" "; 
}



int main(){
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);

    findShortest(adj,v,0);
}