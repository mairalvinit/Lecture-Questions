#include <bits/stdc++.h>
using namespace std;

void Sort2Types(int arr[] , int n){
    int low=0 , mid=0 , high = n-1;
    while(mid<=high){
        if(arr[mid] == 0 ){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[6] = {0,1,2,0,1,2};
    Sort2Types(arr,6);
    for(int i : arr) cout<<i<<" ";
}