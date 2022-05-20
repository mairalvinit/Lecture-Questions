#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[6] = {10,43,65,23,78,12};
    insertionSort(arr,6);
    printArr(arr,6);
}