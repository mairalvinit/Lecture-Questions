#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[] , int n , int sum){
    unordered_set<int>s;
    for(int i=0 ; i<n ; i++){
        if(s.find(sum-arr[i])!= s.end()) return true;
        else s.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr[5] = {3,3,8,15,-8};
    cout<<boolalpha;
    cout<<isPair(arr,5,6);
}