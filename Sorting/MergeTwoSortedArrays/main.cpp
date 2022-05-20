#include <bits/stdc++.h>
using namespace std;

//Naive Solution

void merge(int a[] , int b[] , int n , int m){
    int c[n+m];
    for(int i=0 ; i<n ; i++){
        c[i] = a[i];
    }
    for(int i=0 ; i<m ; i++){
        c[i+n] = b[i];
    }
    sort(c,c+n+m);

    for(int i=0 ; i<n+m ; i++){
        cout<<c[i]<<" ";
    }
}

//Efficient Method 
void merge2(int a[] ,int b[] ,int n , int m){
    int i=0 , j=0;
    while(i<n && j<m){
        if(a[i] <= b[j]) {
            cout<<a[i]<<" ";
            i++;
        }else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n){cout<<a[i]<<" " ; i++;}
    while(j<m){cout<<b[j]<<" ";j++;}
}

int main() {

    int a[4] = {3,4,5,6} , b[6] = {1,2,4,6,7,9};
    merge2(a,b,4,6);
}