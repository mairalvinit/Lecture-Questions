#include<bits/stdc++.h>
using namespace std;

void func(int n , int k , int x , int *arr){
    map<int,int>mp;
    for(int i=0 ; i<n ; i++){
        mp[abs(arr[i] - x)] = i;
    } 
    for(auto it : mp){
        if(k==0)break;
        cout<<arr[it.second]<<" ";
        k--;
    }
}

//using heap based approach 
void fun2(int n , int k , int x , int *arr){
    priority_queue<pair<int,int>>pq;
    for(int i=0 ; i<k ; i++){
        pq.push({abs(arr[i] - x) , i});
    }
    for(int i=k ; i<n ; i++){
        int diff = abs(arr[i] - x);
        if(pq.top().first > diff){
            pq.pop();
            pq.push({diff,i});
        }
    }

    while(pq.empty() == false){
        cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }

}

// Overall Time complexity  = O(nLogk)

int main(){
    int arr[5] = {10,15,7,3,4};
    int x=8,k=2;
    fun2(5,k,x,arr);

}