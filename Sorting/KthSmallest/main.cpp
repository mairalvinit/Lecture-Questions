#include <bits/stdc++.h>
using namespace std;

//Naive
int KthSmallest(int arr[] , int n , int k){
    sort(arr , arr+n);
    return n==1 ? -1 : arr[k-1];
}  //O(nlogn)


//Efficient function
int LomutoPartition(int arr[] , int l , int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l ; j<=h-1 ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}


int KthSmallest2(int arr[] , int n , int k){
    int l=0 , r = n-1;
    while(l<=r){
        int p = LomutoPartition(arr , l , r);
        if(p == k-1) return p;
        else if(p > k-1) r = p-1;
        else l = p+1;
    }
    return -1;
}

int main(){
    int arr[5] = {10,5,30,7,45};
    cout<<arr[KthSmallest2(arr,5,3)]<<endl;
}

