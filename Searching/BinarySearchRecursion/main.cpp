#include <bits/stdc++.h>
using namespace std;

int BSRecursive(int arr[] , int low , int high , int x){
    if(low >= high) return -1;
    int mid  = (low + high)/2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] > x) BSRecursive(arr,low,mid-1,x);
    else BSRecursive(arr,mid+1 , high , x);
}

int main(){
    int arr[5] = {10,20,30,40,50};
    cout<<BSRecursive(arr,0,4,40);
}