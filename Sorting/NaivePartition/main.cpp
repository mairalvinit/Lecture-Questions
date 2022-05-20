#include <bits/stdc++.h>
using namespace std;

int NaivePartition(int arr[] , int l , int h ,  int p){
    int temp[h-l+1] , index=0;
    for(int i=l ; i<=h ; i++){
        if(arr[i] < arr[p]){temp[index] = arr[i];index++;}
    }
    for(int i=l ; i<=h ; i++){
        if(arr[i] == arr[p]){temp[index] = arr[i];index++;}
    }
    int res = l+index-1;
    for(int i=l ; i<=h ; i++){
        if(arr[i] > arr[p]){temp[index] = arr[i];index++;}
    }
    for(int i=l ; i<=h ; i++){
        arr[i] = temp[i - l];
    }
return res;
}

int main(){
    int arr[6] = {7,4,5,1,3,4};
    cout<<NaivePartition(arr,0,5,2)<<endl;
    for(int i : arr) cout<<i<<" ";
}