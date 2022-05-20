#include <bits/stdc++.h>
using namespace std;

int search(int arr[] , int n , int k ){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int insert(int arr[] , int n , int x , int cap , int pos){
    if(n == cap){
        return n;
    }
    for(int i = n-1 ; i>=pos ; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    return n+1;
}

void show(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int cap = 7;
    int n =5;
    int arr[cap] = {10 ,20 ,40 , 32 ,1};
    int k = 32;
    int pos = 2;
    show(arr,n);
     cout<<"-------------------------"<<endl;
    cout<<search(arr,n,k)<<endl;
    n = insert(arr,n,21,cap,pos);
    cout<<search(arr,n,21 )<<endl;
    cout<<"-------------------------"<<endl;
    show(arr,n);
}