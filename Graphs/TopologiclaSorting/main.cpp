#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[]  , vector<int> &indegree , int u , int v){
    adj[u].push_back(v);
    indegree[v]++;
}

void SortTopological(vector<int> adj[]  , vector<int> indegree,int v){
    queue<int>q;
    for(int i=0 ; i<v ; i++){
        if(indegree[i] ==0 ) q.push(i);
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto i : adj[u]){
            if(--indegree[i] == 0)q.push(i);
        }
    }
}

int main(){
int v =5;
vector<int> adj[v];
vector<int> indegree(v,0);
addEdge(adj,indegree,0,2);
addEdge(adj,indegree,0,3);
addEdge(adj,indegree,2,3);
addEdge(adj,indegree,1,3);
addEdge(adj,indegree,1,4);
// for(int i=0 ; i<v ; i++)cout<<indegree[i]<<" ";
SortTopological(adj,indegree,v);
}