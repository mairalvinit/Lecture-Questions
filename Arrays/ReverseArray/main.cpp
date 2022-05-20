#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[] , int n){
    int low = 0 ; int high = n-1 ;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void printA(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = {1,2,7,9,5};
    revArray(arr,5);
    printA(arr,5); 
}