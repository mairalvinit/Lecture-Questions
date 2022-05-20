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

int main(){

    int arr[5] = {1,2,3,4,5};
    cout<<longestSubArray(arr,5,5);
}