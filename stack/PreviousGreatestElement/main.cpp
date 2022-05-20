#include <bits/stdc++.h>
using namespace std;

void printPrevGreatest2(int arr[] , int n){
    stack<int> s;
    s.push(0);
    cout<<-1<<" ";
    for(int i=1 ; i<n ; i++){
        while(s.empty()==false && arr[s.top()] <= arr[i]){
            s.pop();
        }
        int pg = s.empty() ? -1 : arr[s.top()];
        cout<<pg<<" ";
        s.push(i);
    }
}

void printPrevGreatest(int arr[] , int n){
    int maxN = 0;
    cout<<-1<<" ";
    for(int i=1 ; i<n ; i++){
        bool flag = false;
        for(int j = i-1 ; j>=0 ; j--){
            if(arr[j] >=arr[i]){
                cout<<arr[j]<<" ";
                flag = true;
                break;
            } 
        
        }
    if(flag == false){cout<<-1<<" ";}
    }
}

int main(){
    int arr[8] = {15,10,18,12,4,6,2,8};
    printPrevGreatest2(arr,8);
}