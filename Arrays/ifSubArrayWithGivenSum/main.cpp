#include <bits/stdc++.h>
using namespace std;

bool subArrayPresent(int arr[] ,int n , int k){
    int sum = arr[0];
    int s=0;
    for(int e=1 ; e<n ;e++){
        while(sum > k && s < e-1) {
            sum -= arr[s];
            s++;
        }
        if(sum == k) return true;

        if(e<n) sum +=arr[e];
    }
return (sum == k);
}   

int main(){

    int arr[6] = {1,4,20,3,10,5};
    cout<<boolalpha;
    cout<<subArrayPresent(arr,6,33)<<endl;
}