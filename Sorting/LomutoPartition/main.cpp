#include <bits/stdc++.h>
using namespace std;

int LomutoPartition(int arr[] , int l , int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l ; j<=h-1 ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[h] , arr[i+1]);
    return i+1;
}

int main(){
    int arr[5] = {5,4,1,6,2};
    cout<<LomutoPartition(arr,0,4)<<endl;
    for(int i : arr)cout<<i<<" ";
}