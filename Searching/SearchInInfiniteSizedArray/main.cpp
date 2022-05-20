#include <bits/stdc++.h>
using namespace std;

//naive method
int searchInfiinite(int arr[] , int x){
    int i=0 ;
    while(1){
        if(arr[i] == x) return i;
        if(arr[i] > x) return -1;
        i++;
    }
}

//Efficient SOlution

int binarySearch(int arr[] ,int x , int low , int high){
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x) high = mid-1;
        else{
            low = mid+1;
        }
    }
return -1;
}

int searchInfiinite2(int arr[] ,int n){
    if(arr[0] == n) return 0;
    int i = 1;
    while(arr[i] < n){
        i = i*2;
    }
    if(arr[i] == n) return i;
    return binarySearch(arr, n, i/2+1 , i-1);
}

int main(){
    int arr[100] = {1,3,5,7,12,19,24,47,89};
    cout<<searchInfiinite2(arr,12);
}