#include<bits/stdc++.h>
using namespace std;

void sortk(int *arr , int n , int k){
    priority_queue<int , vector<int> , greater<int>> pq;
    for(int i=0 ; i<=k ; i++){
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1 ; i<n ; i++){
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(pq.empty() == false){
        arr[index++] = pq.top();
        pq.pop();
    } 
 }

 int main(){
    int arr[5] = {9,8,7,19,18};
    sortk(arr,5,2);
    for(auto i : arr) cout<<i<<" ";
 }