#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[] , int u , int v , int wt){
    adj[u].push_back(make_pair(v,wt));
    adj[v].push_back(make_pair(u,wt));
}


void printList(vector<pair<int,int>> adj[] , int V){

    for(int i=0 ; i<V ; i++){
        cout<<"Node "<<i<<" is connected to : \n";
        for(auto v : adj[i]){
            cout<<i<<" ----> "<<v.first<<" weight : "<<v.second<<"\n";
        }
        cout<<"-------------------------------\n";
    }

}

int main() {
    int V = 5;
    vector<pair<int,int>> adj[5];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);

    printList(adj , V);
}