#include <bits/stdc++.h>
using namespace std;

void printSpan(int arr[] , int n){
    for(int i=0 ;i<n ; i++){
        int span=1;
        for(int j = i-1 ; j>=0 && arr[j]<=arr[i] ; j--){
            span++;
        }
        cout<<span<<" ";
    }
}

void printSpan2(int arr[] , int n){
    stack<int> s;
    s.push(0);
    cout<<1<<" ";
    for(int i=1 ; i<n ; i++){
        while(s.empty() == false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span = s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main(){
    int arr[6] = {18,12,11,14,13,21};
    printSpan2(arr,6);
}