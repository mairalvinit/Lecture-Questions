#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[] , int n){
    int curr = 0 , res = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0){
            curr = 0;
        }
        else{
            curr++;
            res = max(res , curr);
        }
    }
    return res;
}

int main(){
    int arr[5] = {1,1,0,1,0};
    cout<<countOnes(arr,5)<<endl; 
}