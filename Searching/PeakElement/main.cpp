#include <bits/stdc++.h>
using namespace std;

void printPeak(int arr[] , int n){
    if(arr[0] > arr[1]) cout<<arr[0]<<" ";
    for(int i = 1 ; i<n-1 ; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) cout<<arr[i]<<" ";
    }
    if(arr[n-1] > arr[n-2])cout<<arr[n-1]<<" ";
}

int getAPeak(int arr[] , int n){
    int low = 0  , high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid])) return mid;

        if(mid >0 && arr[mid-1] >=arr[mid]) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main(){

    int arr[7] = {10,20,15,5,23,90,67};
    printPeak(arr,7);
}