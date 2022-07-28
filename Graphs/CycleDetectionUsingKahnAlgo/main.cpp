#include <bits/stdc++.h>
using namespace std;

//Directed Graph 
void addEdge(vector<int> adj[] ,vector<int> &indegree, int u , int v){
    adj[u].push_back(v);
    indegree[v]++;
}

bool CycleDetection(vector<int> adj[] , vector<int> &indegree , int V){
    queue<int>q;
    for(int i=0 ; i<V ; i++){
        if(indegree[i] == 0)q.push(i);
    }
    int count=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto i : adj[u]){
            indegree[i]--;
            if(indegree[i] == 0)q.push(i);
        }
        count++;
    }
    return (count!=V);
}

int main(){
    int V = 5;
    vector<int> adj[V];
    vector<int> indegree(V,0);
    addEdge(adj,indegree,0,1);
    addEdge(adj,indegree,4,1);
    addEdge(adj,indegree,1,2);
    addEdge(adj,indegree,2,3);
    // addEdge(adj,indegree,3,1);

    // for(auto i : indegree)cout<<i<<" ";

    if(CycleDetection(adj,indegree,V))cout<<"Cycle Found";
    else cout<<"Cycle not found";
}