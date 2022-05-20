#include <bits/stdc++.h>
using namespace std;

int countDistinct(int a[] , int b[] , int n1 , int n2){
    unordered_set<int>m(a , a+n1);
    int res=0;
    for(int i=0 ; i<n2 ; i++){
        if(m.find(b[i]) != m.end()){
            res++;
            m.erase(b[i]);
        }
    }
return res;
}

int main(){
    int a[4] = {10,20,10,30};
    int b[4] = {20,10,10,40};
    cout<<countDistinct(a,b,4,4);
}