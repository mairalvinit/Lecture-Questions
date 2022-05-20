#include <bits/stdc++.h>
using namespace std;


//Naive Solution
void moveZeros(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0){
            for(int j=i+1 ; j<n ; j++){
                if(arr[j]!=0){
                    swap(arr[j],arr[i]);
                    break;
                }
            }
        }
    }
}

//Efficient Solution

void moveZeros2(int arr[] , int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

void printA(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}




int main(){
    int arr[6] = {1,0,0,5,0,2};
    moveZeros2(arr,6);
    printA(arr,6);
}