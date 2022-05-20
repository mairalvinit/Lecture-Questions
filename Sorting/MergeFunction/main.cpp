#include <bits/stdc++.h>
using namespace std;

void mergeFunction(int arr[] , int low ,int mid , int high){
    int n1= mid-low+1 , n2 = high-mid;
    int left[n1] , right[n2];
    for(int i=0 ; i<n1 ; i++){
        left[i] = arr[low+i];
    }
    for(int i=0 ; i<n2 ; i++){
        right[i] = arr[mid+i+1];
    }

    int i=0 , j=0 , k=0;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
     while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[7] = {10,15,20,40,8,11,55};
    int low = 0;
    int mid = 3;
    int high = 6;
    mergeFunction(arr,low,mid,high);
    printArr(arr,7); 
}