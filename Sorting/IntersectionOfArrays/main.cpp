#include <bits/stdc++.h>
using namespace std;

void intersection(int a[] ,int b[] , int n1 , int n2){
    int i=0  , j=0;
    while(i<n1 && j<n2){
        if(i>0 && a[i]==a[i-1] ){
            i++;
            continue;
        }
        if(a[i] > b[j])j++;
        else if(a[i] < b[j]) i++;
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}

int main(){
    int a[5] = {12,45,67,78,91};
    int b[6] = {13,45,45,67,76,78};
    intersection(a,b,5,6);
}