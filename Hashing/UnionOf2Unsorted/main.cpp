#include <bits/stdc++.h>
using namespace std;

int UnionOfUnsorted(int a[] ,int b[] , int n1 , int n2){
    unordered_set<int>s(a,a+n1);
    for(int i=0 ; i<n2 ; i++){
        s.insert(b[i]);
    }
    return s.size();
}

int main(){
    int a[4] = {15,20,5,15};
    int b[5] = {15,15,15,20,10};
    cout<<UnionOfUnsorted(a,b,4,5);
}