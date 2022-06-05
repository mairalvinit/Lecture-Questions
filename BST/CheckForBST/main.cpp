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

bool isBST(Node *root , int min , int max){
    if(root == NULL) return true;

    return (root->data>min && root->data<max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max));
}

Node *insert(Node *root , int x){
    if(root == NULL) return new Node(x);
    if(root->data > x) root->left = insert(root->left,x);
    else if(root->data < x) root->right = insert(root->right,x);
    return root;
}

//For the binary tree to be binary search tree its inorderTraversal should be sorted;
bool isBST2(Node *root){
    if(root == NULL) return true;
    if(isBST2(root->left)== false)return false;
    static int prev = INT_MIN;
    if(root->data <= prev)return false;
    prev = root->data;
    return isBST2(root->right);
}

int main(){
    Node *root = NULL;
    int key[] = {6,7,34,12,56,32};
    for(int i : key) root = insert(root,i);
 //   Node *root = new Node(20);
    // root->left = new Node(10);
    // root->left->left = new Node(40);
    // root->left->right = new Node(20);
    // root->right = new Node(100);
    // root->right->left = new Node(12);
    // root->right->right = new Node(23);
    cout<<isBST2(root);
}