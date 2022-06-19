#include<bits/stdc++.h>
using namespace std;

int maxPurchase(int *arr , int n , int x){
    sort(arr,arr+n);
    int sum=0;
    int count=0;
    for(int i=0 ; i<n ; i++){
        sum+=arr[i];
        if(sum >= x) return count;
        count++;
    }
    return count;
}

//Method 2;
int maxPurchase2(int *arr , int n , int x){
    priority_queue<int , vector<int> , greater<int>> pq(arr,arr+n);
    int count=0;
    while(pq.empty() == false){
       x = x - pq.top();
        pq.pop();
       if(x >=0){
        count++;
       }else return count; 
    }
    return count;
}

int main(){
    int arr[5] = {1,12,5,111,2000};
    cout<<maxPurchase(arr,5,10);
}