#include <bits/stdc++.h>
using namespace std;

int searchIdx(int arr[] , int n , int x){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == x) return i;
    }

    return -1;
}

int deleteOperation(int arr[] , int n , int x){
    int idx = searchIdx(arr,n,x);
    if(idx==-1) return n;
    
    for(int i=idx ; i<n ; i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

void show(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int  n =5;
    int arr[n] = {1,2,3,4,5};
    show(arr,n);
     n = deleteOperation(arr,n,3);
     show(arr,n);
}