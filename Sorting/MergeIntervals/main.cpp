#include <bits/stdc++.h>
using namespace std;


struct interval{
       int start;
       int end;
   };

bool myComp(interval i1 , interval i2){
    return (i1.start<i2.start);
}

void mergeIntervals(int arr[] , int n){
    sort(arr , arr+n , myComp);
    int k=0;
    for(int i=1 ; i<0 ; i++){
        if(arr[i].start >= arr[k].start && arr[i].start <= arr[k].end ){
            int start = arr[]
        }
    }
}

int main(){

}