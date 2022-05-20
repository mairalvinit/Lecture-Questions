#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[] , int start , int end){
    if(end<=start) return 0;
    int profit =0;
    for(int i=start ; i<end ; i++){
        for(int j = i+1 ; j<=end ; j++){
            if(price[j] > price[i]){
                int curr_profit = price[j] - price[i] + maxProfit(price,start , i-1 ) + maxProfit(price,j+1 , end);
                profit = max(profit , curr_profit);
            } 
        }
    }
return profit;
}

int maxProfit2(int price[] , int n){
    int profit =0 ;
    for(int i=1 ; i<n ;i++){
        if(price[i] > price[i-1]) profit += (price[i] - price[i-1]);
    }
    return profit;
}

int main(){
    int arr[5] ={1,2,3,18,12};
    cout<<maxProfit2(arr,5); 
}