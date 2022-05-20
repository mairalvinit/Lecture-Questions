#include <bits/stdc++.h>
using namespace std;

//Efficient Method

void reverse(int arr[] ,int low ,int high){

    while(low<high){
        swap(arr[high],arr[low]);
        high--; 
        low++;
    }
}

void leftRotateByD(int arr[] , int n , int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void printA(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    leftRotateByD(arr,5,2);
    printA(arr,5);
}