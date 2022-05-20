#include <bits/stdc++.h>
using namespace std;

void printFreq(int arr[] , int n){
    unordered_map<int,int> m;
    for(int i=0 ; i<n ; i++){
        m[arr[i]]++;
    }

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}

int main(){
    int arr[10] = {1,2,3,1,1,4,5,2,3,5};
    printFreq(arr,10);
}