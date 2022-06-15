#include <bits/stdc++.h>
using namespace std;

int searchInSortedRotated(int arr[] , int n , int target){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = (low+high) / 2;
        if(arr[mid] == target)return mid;

        if(arr[low] < arr[mid]){
            if(target>= arr[low] && target <arr[mid]){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
    else{
        if(target > arr[mid] && target<=arr[high] ) low = mid+1;
        else high = mid -1;
    }
    }
return -1;
}

int main(){
    int arr[3] = {5,1,3};
    cout<<searchInSortedRotated(arr,3,3);
}