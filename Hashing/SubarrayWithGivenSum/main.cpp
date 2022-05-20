#include<bits/stdc++.h>
using namespace std;

bool isSumPresent(int arr[] , int n , int sum){
    unordered_set<int> s;
    int prefix = 0; 
    for(int i=0 ; i<n ; i++){
        prefix += arr[i];
        if(prefix == sum) return true;
        if(s.find(prefix-sum) != s.end()) return true;
        
        
            s.insert(prefix);
    }
return false;
}

int main(){
    int arr[6] = {5,8,6,13,3,-1};
    cout<<boolalpha;
    cout<<isSumPresent(arr,6,22);

}