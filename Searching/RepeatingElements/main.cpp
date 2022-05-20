#include <bits/stdc++.h>
using namespace std;

//Efficient Approach O(n) O(n)

// int getRepeating(int arr[] , int n){
//     bool visited[n]{false};
//     for(int i=0 ; i<n ;i++){
//         if(visited[arr[i]])return arr[i];
//         visited[arr[i]] = true; 
//     }
// }

//Efficient approach O(n) O(1)
int getRepeating2(int arr[] , int n){
    int slow = arr[0] , fast = arr[0];
    do{
        slow  = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    slow = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    return fast;
} 

int main(){
    int arr[5] = {2,2,1,3,3};
    cout<<getRepeating2(arr,6);
}