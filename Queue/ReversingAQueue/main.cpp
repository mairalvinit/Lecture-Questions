#include <bits/stdc++.h>
#include <queue>
using namespace std;

void Print(queue<int>& Queue) 
{ 
	while (!Queue.empty()) { 
		cout << Queue.front() << " "; 
		Queue.pop(); 
	} 
} 

void Qreverse(queue<int>& Queue){
    stack<int> Stack;
    while(!Queue.empty()){
        Stack.push(Queue.front());
        Queue.pop();
    }
    while(!Stack.empty()){
        Queue.push(Stack.top());
        Stack.pop();
    }
}

void RecReverse(queue<int>& Queue){
    if(Queue.empty()) return;

    int temp = Queue.front();
    Queue.pop();
    RecReverse(Queue);
    Queue.push(temp);
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
cout<<q.front()<<" "<<q.back()<<endl;
RecReverse(q);
cout<<q.front()<<" "<<q.back()<<endl;
Print(q);
}