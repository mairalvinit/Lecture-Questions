#include <bits/stdc++.h>
using namespace std;

int Hoare(int arr[] , int l , int h){
    int pivot = 0;
    int i=l-1 , j=h+1;
    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j] > pivot);
    
    if(i>=j) return j;
    swap(arr[i] , arr[j]);
    }
}

int main(){
    int arr[5] = {-5,4,-2,6,7};
    Hoare(arr,0,4);
    for(int i : arr)cout<<i<<" ";
}

