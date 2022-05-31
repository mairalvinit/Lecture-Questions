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

void iterativePreorder(Node *root){
    if(root == NULL) return;
    stack<Node *> s;
    s.push(root);
    while(s.empty()==false){
        Node *curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right != NULL) s.push(curr->right);
        if(curr->left != NULL) s.push(curr->left);
    }
}

void iterativePreorderEff(Node *root){
    if(root == NULL) return;
    stack<Node *> s;
    Node *curr = root;
    while(s.empty()==false || curr != NULL){
        while(curr != NULL){
            cout<<curr->data<<" ";
            if(curr->right != NULL) s.push(curr->right);
            curr = curr->left;
        }if(s.empty()==false){
        curr = s.top(); 
        s.pop();}
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
    iterativePreorderEff(root);
}