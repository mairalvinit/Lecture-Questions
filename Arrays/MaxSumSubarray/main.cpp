#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[] , int n){
    int res = arr[0];
    for(int i=0 ; i<n ;i++){
        int curr = 0;
        for(int j = i+1 ; j < n ; j++){
            curr = curr + arr[j];
            res = max(res,curr);
        }
    }
    return res;
}

int maxSumSubarray2(int arr[] , int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1 ; i < n ; i++){
        maxEnding = max(maxEnding+arr[i] , arr[i]);
        res = max(res , maxEnding);
    }
    return res;
}

int main(){
    int arr[7] = {-5,1,-2,3,-1,2,-2};
    cout<<maxSumSubarray2(arr,7)<<endl;
}