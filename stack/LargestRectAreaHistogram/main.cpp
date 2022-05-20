#include <bits/stdc++.h>
using namespace std;

int findLargestArea(int arr[] , int n){
    int res=0;
    for(int i =0 ; i<n ; i++){
        int count = arr[i];
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[j] > arr[i])count = count + arr[i];
            else break;
        }
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] > arr[i]) count = count+arr[i];
            else break;
        }
    res = max(res,count);
    }
return res;
}

//--------------------------------------------------

int findLargestArea2(int arr[] , int n){
    stack<int> s;
    int ps[n] , ns[n];

    //previous Smaller
    s.push(0);
    for(int i=0 ; i<n ; i++){
        while(s.empty() == false && arr[s.top()] >= arr[i]) s.pop();
        int prev = s.empty() ? -1 : s.top();
        ps[i] = prev;
        s.push(i);
    }

    while(s.empty() == false) s.pop();

    //next smaller;
    s.push(n-1);
    for(int i=n-1 ; i>=0 ; i--){
        while(s.empty() == false && arr[s.top()] >= arr[i]) s.pop();
        int next = s.empty() ? n : s.top();
        ns[i] = next;
        s.push(i);
    }

   int res=0;
   for(int i=0 ; i<n ; i++){
      int curr = arr[i];
       curr += (i-ps[i] -1)*arr[i];
       curr += (ns[i] -i-1)*arr[i];
       res = max(res,curr);
   }


return res;
}



int main(){
    int arr[7] = {6,2,5,4,1,5,6};
    cout<<findLargestArea2(arr,7);
}