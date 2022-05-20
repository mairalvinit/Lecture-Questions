#include <bits/stdc++.h>
using namespace std;

int LomutoPartition(int arr[] , int l , int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j = l ; j<=h-1 ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[h]);
    return i+1;
}

void quickSort(int arr[] , int l , int h){
    if(l<h){
        int p = LomutoPartition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

int main(){
    int arr[7] = {8,4,7,9,3,10,5};
    quickSort(arr,0,6);
    for(int i : arr)cout<<i<<" ";
}