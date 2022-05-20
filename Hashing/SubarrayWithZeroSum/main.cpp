#include <bits/stdc++.h>
using namespace std;

bool isSumZero(int arr[] , int n){
    int prefix_sum =0;
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++){
        prefix_sum += arr[i];
        if(s.find(prefix_sum) != s.end()) return true;
        if(prefix_sum ==0 ) return true;
        
        s.insert(prefix_sum);
    }
    return false;
}

int main(){
    int arr[5] = {-3,6,-3,-1,2};
    cout<<boolalpha;
    cout<<isSumZero(arr,5);
}