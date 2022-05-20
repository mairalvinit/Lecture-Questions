#include <bits/stdc++.h>

using namespace std;

//Naive Approach
int sqroot(int n){
    int i=1;
    while(i*i <= n) i++;

    return i-1;
}

//Efficient Solution
int sqroot2(int n){
    int low=0 , high = n , ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int mysq = mid*mid;
        if(mysq == n) return mid;
        else if(mysq > n) high = mid-1;
        else{
            low = mid+1;
            ans = mid;
        }
    }
return ans;
}



int main(){
    cout<<sqroot2(15)<<endl;
}