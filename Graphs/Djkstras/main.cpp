#include<bits/stdc++.h>
using namespace std;

vector<int> Dijkstras(vector<int> graph[] , int v , int s){
    vector<int> dist(v,INT_MAX);
    dist[s]=0;
    vector<bool> fin(v,false);
    for(int count =0 ; count < v-1 ; count++){
        int u = -1;
        for(int i=0 ; i<v ; i++)if(!fin[i] && (u==-1 || dist[i] < dist[u]))u = i;
        fin[count] = true;
        for(int i=0 ; i<v ; i++){
            if(graph[u][i] != 0 && fin[i] == false){
                dist[i] = min(dist[i] , dist[u] + graph[u][i]);
            }
        }
    }
    return dist;
}

int main(){
    int v = 4;
    vector<int> graph[v] = {
        {0,50,100,0},
        {50,0,30,200},
        {100,30,0,20},
        {0 ,200 , 20,0}
    };
    vector<int> res = Dijkstras(graph , v , 0);
    for(auto i : res)cout<<i<<" ";
}