#include <bits/stdc++.h>
using namespace std;

int WindowSlide(int arr[] , int n , int k){
    //sum of first N elements
    int sum=0 ;
    for(int i=0 ; i<k ; i++){
        sum = sum + arr[i];
    }
    int maxSum = sum;
    for(int i=0 ; i<n-k ; i++){
        sum = sum - arr[i] + arr[k+i];
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int main(){
    int arr[6] = {1,8,30,-5,20,7};
    cout<<WindowSlide(arr,6,3); 
}