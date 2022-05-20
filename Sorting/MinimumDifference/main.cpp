#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[] , int n){
    int res = INT_MAX;
    sort(arr,arr+n);
    for(int i=1 ; i<n ; i++){
        res = min(res,abs(arr[i] - arr[i-1]));
    }
    return res;
}

int main(){
    int arr[4] = {10,3,20,12};
    cout<<minDiff(arr,4);
}