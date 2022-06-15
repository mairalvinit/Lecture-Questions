#include <iostream>
#include<queue>

using namespace std;

int main(){
//Method 1
    priority_queue <int, vector<int> , greater<int>> pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    cout<<pq.size()<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //Method 2
    int arr[4] = {34,13,78,23}
    priority_queue<int> pq2(arr,arr+4); // O(n) // More Efficient
}