#include <bits/stdc++.h>
using namespace std;

int largest(int arr[] , int n){
    int res =arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]>res) res = arr[i];
    }
    return res;
}

int main(){
    int arr[5] = {1,4,21,44,12};
    cout<<largest(arr,5)<<endl;
}