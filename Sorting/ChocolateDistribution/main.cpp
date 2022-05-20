#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[] , int n , int m){
    if(m>n)return -1;
    sort(arr , arr+n);
    int res = arr[m-1] - arr[0];
    for(int i=1 ; i+m-1<n ; i++){
        res = min(res,(arr[m-1+i] - arr[i]));
    }
    return res;
}

int main(){
    int arr[8] = {3,4,1,9,56,7,9,12};
    cout<<minDiff(arr,8,5)<<" ";
}