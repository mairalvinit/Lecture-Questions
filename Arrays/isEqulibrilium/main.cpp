#include <bits/stdc++.h>
using namespace std;

int isEqulibrium(int arr[] , int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    int lsum = 0;
    for(int i=0 ; i<n ; i++){
        if(lsum == sum - arr[i])return arr[i];
        lsum +=arr[i];
        sum -=arr[i];
    }
    return -1;
}

int main(){
    int arr[5] = {2,3,7,4,1};
    cout<<isEqulibrium(arr,5);
}