#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-1 ; j++){
            if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }
}

//more Optmize
void bubbleSort2(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        bool swapped  = false;
        for(int j=0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                swapped = true;
        }
    }
    if(!swapped) break;
}
}

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
}

int main(){
int arr[6] = {4,6,8,1,2,5};
bubbleSort2(arr,6);
printArr(arr,6);

}