#include <bits/stdc++.h>
using namespace std;

//Efficient Method
void printFreq(int arr[] , int n){
    int freq = 1 , i =1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        freq = 1;
        i++;
    }
    if(n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,3,4};
    printFreq(arr,5);
}