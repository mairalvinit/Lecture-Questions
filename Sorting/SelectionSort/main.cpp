#include <bits/stdc++.h>
using namespace std;

//Naive method
void selectionSort(int arr[] , int n){
    int temp[n];
    for(int i=0 ; i<n ; i++){
        int min_idx =0;
        for(int j =1 ; j<n ; j++){
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        temp[i] = min_idx;
        arr[min_idx] = INT_MAX;
    }
    for(int i=0 ; i<n ; i++){
        arr[i] = temp[i];
    }
}

//Efficient method
void selectionSort2(int arr[] , int n){
    int min_idx;
    for(int i=0 ; i<n-1 ;i++){
        min_idx =i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[min_idx] , arr[i]);
    }
}

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
}


int main(){
    int arr[6] = {1,6,3,2,8,7};
    selectionSort2(arr,6);
    printArr(arr,6);
}