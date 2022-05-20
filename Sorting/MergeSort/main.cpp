#include <bits/stdc++.h>
using namespace std;

// void merge(int arr[] , int l , int m , int r){
//     int n1 = m-l+1 , n2 = r-m;
//     int left[n1] , right[n2];
//     for(int i=0 ; i<n1 ; i++){left[i] = arr[l+i];}
//     for(int i=0 ; i<n2 ; i++){right[i] = arr[m+i+1];}
    
//     int i=0 , j=0 ,k=0 ;
//     while(i<n1 && j<n2){
//         if(left[i] <= right[j]){
//             arr[k] = left[i];
//             i++;
//             k++;
//         }else{
//             arr[k] = right[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n1){
//         arr[k] = left[i];
//         i++;
//         k++;
//     }

//     while(j<n2){
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// }


void mergeFunction(int arr[]  ,int low , int mid , int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1] , right[n2];
    for(int i=0 ; i<n1 ; i++){
        left[i] = arr[low+i];
    }
    for(int i=0 ; i<n2 ; i++){
        right[i] = arr[mid+i+1];
    }
    int i=0 , j=0 , k=low;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
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

}

void mergeSort(int arr[] , int l , int r){
    if(r > l){
        int m = l + (r-l)/2;
        mergeSort(arr, l , m );
        mergeSort(arr, m+1 , r);
        mergeFunction(arr,l, m ,r);
    }
}

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[5] = {10,5,30,15,7};
    mergeSort(arr,0,4);
    printArr(arr,5);
}