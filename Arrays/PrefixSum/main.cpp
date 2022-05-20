#include <bits/stdc++.h>
using namespace std;

int prefix(int arr[] , int n){
    
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for(int i=1 ; i<n ;i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
}

int getSum(int prefix_sum, int l , int r){

}