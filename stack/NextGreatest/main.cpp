#include <bits/stdc++.h>
using namespace std;

void printGreatest(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        int j;
        for(j=i+1 ; j<n ; j++){
            if(arr[j] > arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
    if(j==n)cout<<-1<<" ";
    }
}

void printGreatest2(int arr[] , int n){
    stack<int> s;
    s.push(arr[n-1]);
    cout<<-1<<" ";
    for(int i=n-2 ; i>=0 ; i--){
        while(s.empty() == false && s.top() <= arr[i]) s.pop();
        int nxtGre = s.empty() ? -1 : s.top();
        cout<<nxtGre<<" ";
        s.push(arr[i]);
    }
}
int main(){
    int arr[8] ={5,15,10,8,6,12,9,18};
    printGreatest2(arr,8);
}