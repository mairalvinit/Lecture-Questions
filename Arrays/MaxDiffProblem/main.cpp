#include <bits/stdc++.h>
using namespace std;

//Naive Approach
int maxDiff(int arr[] , int n){
    int res = arr[1] - arr[0];
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            res = max(res,arr[j] - arr[i]);
        }
    }
    return res;
}

//Efficient Solution 
int maxDiff2(int arr[] , int n){
    int minNum = arr[0];
    int res =0 ;
    for(int i=1 ; i<n ; i++){
        minNum = min(minNum,arr[i]);
        res = max(res , arr[i] - minNum);
    }
return res;
}

int main(){
    int arr[7] = {20,30,10,15,4,30,1};
    cout<<maxDiff2(arr,7)<<endl;
}