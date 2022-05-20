#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int n){
    int first = 1 , second =0;
    bool flag = true;
    for(int i = 1 ; i<n ;i++){
        if(arr[first] > arr[second]){
            first++; second++;
        }else{
            flag = false;
        }
    }
    return flag;
}

bool isSorted2(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<boolalpha;
    cout<<isSorted2(arr,5)<<endl;
}