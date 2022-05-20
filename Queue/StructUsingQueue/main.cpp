#include <bits/stdc++.h>
using namespace std;

struct Stack{
    queue<int> q;
    int top(){
        if(q.empty()) return -1;
        return q.back();
     }
    void push(int x){
        q.push(x);
    }
    void pop(){
        if(q.empty()) return;
        for(int i=0 ; i<q.size()-1 ; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        q.pop();
    }
    int size(){
        return q.size();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
}