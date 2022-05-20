#include <bits/stdc++.h>
using namespace std;


//Naive Method
void leaders(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        bool flag = true;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]<=arr[j]){
                flag = false;
                break;
            }
        }
        if(flag==true) cout<<arr[i]<<endl;
    }
}

//Efficient Method

void leaders2(int arr[] , int n){
    int curr_ldr = arr[n-1];
    cout<<arr[n-1]<<endl;
    for(int i = n-2 ; i>=0 ; i--){
        if(arr[i] > curr_ldr){
            cout<<arr[i]<<endl;
            curr_ldr = arr[i];
        }
    }
}


int main() {
    int arr[7] = {7,10,4,3,6,5,2};
    leaders2(arr,7);
}