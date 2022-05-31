#include <bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *left,*right;
     Node (int x){
          data = x;
          left = right = NULL;
    }
};

void iterativeInorder(Node *root){
    stack<Node *>st;
    Node *curr = root;
    while(curr != NULL || st.empty()==false){
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top() ; st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    iterativeInorder(root);
}