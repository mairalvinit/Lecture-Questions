#include <bits/stdc++.h>
using namespace std;

int remDup(int arr[] , int n){
    int res = 1;
    for(int i=1 ; i<n ; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

void printA(int arr[] , int n){ 
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[6] = {1,2,2,4,4,4};
    int p = remDup(arr,6);
    printA(arr,p);
}