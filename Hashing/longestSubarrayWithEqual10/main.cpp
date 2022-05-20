#include <bits/stdc++.h>
using namespace std;

int longestSubArray(int arr[] , int n , int sum){
    unordered_map<int,int> m;
    int prefix=0;
    int res=0;
    for(int i=0 ; i<n ; i++){
        prefix += arr[i];
        if(prefix == sum){
            res = i+1;
        }

        if(m.find(prefix) == m.end()){
            m.insert({prefix,i});
        }

        if(m.find(prefix- sum) != m.end()){
            res = max(res, i - m[prefix-sum]);
        }
    }
return res;
}


int findSubArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0)arr[i] = -1;
    }
    return longestSubArray(arr,n,0);
}

int main(){

    int arr[7] = {1,0,1,1,1,0,0};
    cout<<findSubArray(arr,7);
}