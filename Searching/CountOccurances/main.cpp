#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[] , int n , int x){
    int low =0 , high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] < x){
               low = mid + 1;
        }else if(arr[mid] > x) high = mid-1;
        else{
            if(mid==0 || arr[mid-1] != arr[mid]) return mid;
               else high = mid-1;
        }
    }
return -1;
}

int lastOccurance(int arr[] , int n , int x){
    int low=0 , high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x)high = mid-1;
        else if(arr[mid] < x) low  = mid+1;
        else{
            if(mid ==0 || arr[mid]!=arr[mid+1]) return mid;
            else{
                low = mid +1;
            }
        }
    }
    return -1;
}

int countOccurances(int arr[] , int n , int x){

    int first = firstOccurance(arr,n,x);
    int last = lastOccurance(arr,n,x);
    if(first == -1 || last == -1) return 0;
    
    if(first == last) return 1;
    return last - first +1;
}

int main(){
    int arr[6] = {10,20,20,20,30,30};
    cout<<countOccurances(arr,6,35);
}