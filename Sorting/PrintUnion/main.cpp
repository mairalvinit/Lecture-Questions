#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[] , int b[] , int n1 , int n2){
    int i=0 , j=0;
    while(i<n1 && j<n2){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j] == b[j-1]){
            j++;
            continue;
        }
        if(a[i] > b[j]){
            cout<<b[j]<<" ";
            j++;
        }else if(a[i]< b[j]){
            cout<<a[i]<<" ";
            i++;
        }else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

while(i>0 && i<n1){
    if(a[i] == a[i-1]) continue;
    cout<<a[i]<<" ";
    i++;
}
while(j>0 && j<n2){
    if(b[j] == b[j-1]) continue;
    cout<<b[j]<<" ";
    j++;
}

}

int main(){
    int a[5] = {12,45,67,78,91};
    int b[6] = {13,45,45,67,76,78};
    printUnion(a,b,5,6);
}