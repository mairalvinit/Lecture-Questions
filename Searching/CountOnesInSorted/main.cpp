#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[] , int n) {
    int low = 0 , high = n-1;
    int res = 0;
    while(low <= high){
        int mid = (low +high)/2;
        if(arr[mid] ==0 ) low = mid + 1;
        else{
            if(mid == 0 || arr[mid-1]!=1) return n-mid;
            else{
                high = mid -1;
            }
        }
    }
return 0;
}

int main(){
    int arr[7] = {0,0,1,1,1,1,1};
    cout<<countOnes(arr,7)<<endl;
}