#include <bits/stdc++.h>
using namespace std;

void fun(int n , int *arr , int k){
    priority_queue<int,vector<int> , greater<int>> pq;
    for(int i=0 ; i<k ; i++)pq.push(arr[i]);
    for(int i=k ; i<n ; i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty() == false){
        cout<<pq.top()<<" ";
        pq.pop();    
        }
}

int main(){
    int arr[7] = {5,15,10,20,8,25,18};
    fun(7,arr,3);
}