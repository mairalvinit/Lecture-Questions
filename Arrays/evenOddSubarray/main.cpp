#include <bits/stdc++.h>
using namespace std;

//Naive Method
int evenOddSubarray(int arr[] , int n){
    int res = 1;
    int currLen = 1;
    for(int i=1 ; i<n ; i++){
        if( (arr[i]%2==0 && arr[i-1]%2!=0)  ||  (arr[i]%2!=0 && arr[i-1]%2==0) ){
            currLen++;
        }else{
            currLen = 1;
        }
        res = max(res , currLen);

    }
    return res;
}

int main(){
    int arr[5] = {10,12,14,7,8}; 
    cout<<evenOddSubarray(arr,5);
}