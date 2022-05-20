#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[] , int n){
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++){
        s.insert(arr[i]);
    }
    return s.size();
}

int countDistinct2(int arr[] , int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

int main() {

    int arr[8] = {12,15,12,13,12,13,13,18};
    cout<<countDistinct2(arr,8);
}