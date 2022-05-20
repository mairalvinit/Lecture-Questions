#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[] , int n){
    int temp = arr[0];
    for(int i=0 ; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void printA(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    leftRotate(arr,5);
    printA(arr,5);
}