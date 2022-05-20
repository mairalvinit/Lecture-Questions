#include <bits/stdc++.h>
using namespace std;

void cycleSortDistinct(int arr[] , int n){
    for(int cs=0 ; cs<n-1 ; cs++){
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1 ; i<n ; i++){
            if(arr[i] < item)pos++;
        }
        swap(item,arr[pos]);
        while(pos != cs){
            pos = cs;
            for(int j=cs+1 ; j< n ; j++){
                if(arr[j] < item)pos++;
            }
            swap(item ,arr[pos]);
        }
    }
}

int main(){
    int arr[5] = {10,40,50,20,30};
    cycleSortDistinct(arr,5);
     for(auto i : arr)cout<<i<<" ";
}