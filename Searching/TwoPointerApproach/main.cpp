#include <bits/stdc++.h>
using namespace std;

//Question 1
bool getSum(int arr[] , int n , int x){
    int left = 0 , right = n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == x) return true;
        else if(sum > x) right--;
        else{
            left ++;
        }
    }
return false;
}

//Question 2

bool getPair(int arr[] , int left , int right,int x){
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == x) return true;
        else if(sum > x) right--;
        else{
            left ++;
        }
    }
return false;
}

bool getTripelateSum(int arr[] , int n  , int x){
    for(int i=0 ; i<n ; i++){
        if(getPair(arr,i+1 , n-1 , x-arr[i])) return true;;
    }
    return false;
}

int main(){
    int arr[7] = {2,3,4,8,9,20,40};
    cout<<boolalpha;
    cout<<getTripelateSum(arr,7,32)<<endl;
}