#include <bits/stdc++.h>
using namespace std;

// int countAndMerge(int arr[] , int l , int m , int r){
//     int n1 = m-l+1 , n2 = r-m;
//     int left[n1] , right[n2];
//     for(int i=0 ; i<n1 ; i++){left[i] = arr[l+i];}
//     for(int i=0 ; i<n2 ; i++){right[i] = arr[m+i+1];}
//     int i=0 , j=0 , k=l , res =0;
//     while(i<n1 && j<n2){
//         if(left[i] <= right[j]){arr[k] = left[i] ; i++;}
//         else{
//             arr[k] = right[j] ;
//             j++;
//             res = res + (n1-i);
//         }
//         k++;
//     }
//     while(i<n1){arr[k] = left[i] ; i++ ; k++;}
//     while(j<n2){arr[k] = right[i] ; j++ ; k++;}

// return res;
// }


int mergeFunction(int arr[]  ,int low , int mid , int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1] , right[n2];
    for(int i=0 ; i<n1 ; i++){
        left[i] = arr[low+i];
    }
    for(int i=0 ; i<n2 ; i++){
        right[i] = arr[mid+i+1];
    }
    int i=0 , j=0 , k=low , res=0;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
            res += (n1-i);
        }else{
            arr[k++] = right[j++];
        }
    }
while(i<n1){
    arr[k++] = left[i++];
}
while(j<n2){
    arr[k++] = right[j++];
}

return res;
}


int countInversion(int arr[] , int l , int r){
    int res=0;
    if(l < r){
        int m = (r+l)/2;
        res += countInversion(arr,l,m);
        res += countInversion(arr,m+1 ,r);
        res += mergeFunction(arr,l,m,r);
    }
return res;
}

int main(){
    int arr[5] = {2,4,1,3,5};
    // cout<<countInversion(arr,0,4)<<endl;
    for(int i : arr)cout<<i<<" ";
}