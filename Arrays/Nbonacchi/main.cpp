#include <bits/stdc++.h>
using namespace std;

void printNbonacchi(int n , int m){
    
    int arr[m];

    for(int i=0 ; i<n ; i++){
        if(i == n-1) arr[i] = 1;
        else{
            arr[i] = 0;
        }
    }
    int curr_sum = 1;
    for(int i = n ; i<m;i++ ){
        arr[i] = curr_sum;
        curr_sum = curr_sum - arr[i-n] + arr[i];
        }

    for(int i=0 ; i<m ;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    printNbonacchi(4,10);
}