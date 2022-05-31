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

Node *insert(Node *root , int n){
    if(root == NULL) return new Node(n);
    else if(root->data < n) root->right = insert(root->right,n);
    else if(root->data > n) root->left = insert(root->left,n);
    return root;
}

Node *insertIterative(Node *root , int x){
    Node *temp = new Node(x);
    Node *parent = NULL , *curr = root;
    while(curr != NULL){
        parent = curr;
        if(curr->data > x) curr = curr->left;
        else if(curr->data < x) curr = curr->right;
        else return root;
    }
    if(parent == NULL) return temp;
    else if(parent->data > x) parent->left = temp;
    else if(parent->data < x) parent->right = temp;
    return root;
}

void Inorder(Node *root){
    if(root != NULL) {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

int main(){
    Node *root = NULL;
    root = insertIterative(root,5);
    root = insertIterative(root,15);
    root = insertIterative(root,10);
    root = insertIterative(root,12);
    root = insertIterative(root,18);
    Inorder(root);
}