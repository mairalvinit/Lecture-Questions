#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st , int top){
    if(st.empty()){
        st.push(top);
        return;
    }
    int data = st.top();
    st.pop();
    insertAtBottom(st , top);
    st.push(data);
    return;
}

void reverseStack(stack<int> &st){
    if(st.empty()) return;
    int top = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,top);
}

int main(){
    stack<int> st;
    for(int i=1 ; i<5 ; i++)st.push(i);
    reverseStack(st);
    while(st.empty() == false){
        cout<<st.top()<<" ";
        st.pop();
    }
}