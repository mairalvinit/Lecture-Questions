#include <bits/stdc++.h>
using namespace std;

int largest(int arr[] , int n){
    int res = 0;
    for(int i=1 ; i<n ; i++){
        if(arr[i]>arr[res]) res = i;
    }
    return res;
}

int secondLargest(int arr[] , int n){
    int largestNo = largest(arr , n);  
    int res = -1;
    for(int i=0 ; i<n ; i++){
        if(arr[i] != arr[largestNo]){
            if(res == -1) res = i;
            else if(arr[i] > arr[res]) res = i;

        }
    }
    return res;
}

//Efficient Approach
int effSecondLargest(int arr[] , int n){
    int res = -1 , lg = 0 ;
    for(int i=1 ; i<n ; i++){
        if(arr[i]>arr[lg]){
            res = lg;
            lg = arr[i];
        }
        else if(arr[i] != arr[lg]){
            if(res ==-1 || arr[i]>arr[res]) res = i;
        }
    }
    return res; 
}

int main(){
    int arr[5] = {90,43,21,54,67};
    cout<<secondLargest(arr , 5)<<endl;
    cout<<effSecondLargest(arr, 5)<<endl;
    }