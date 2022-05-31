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

bool searchBST(Node *root , int n){
    if(root == NULL) return false;
    if(root->data == n) return true;
    else if(root->data > n) return searchBST(root->left,n);
    else return searchBST(root->right,n);    
}

bool searchBSTiterative(Node *root , int n){
    while(root != NULL){
        if(root->data == n) return true;
        else if(root->data > n) root = root->left;
        else root = root->right;
    }
    return false;
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(9);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->right = new Node(80);
    cout<<boolalpha;
    cout<<searchBSTiterative(root,18);
}