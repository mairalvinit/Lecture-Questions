#include <bits/stdc++.h>
using namespace std;

//We just need to find the two nodes in inorder traverasal j
struct Node{
     int data;
     Node *left,*right;
     Node (int x){
          data = x;
          left = right = NULL;
    }
};
Node *first = NULL,*second = NULL;
//Inorder Traversal
void fixBST(Node *root){
    if(root == NULL) return;
    fixBST(root->left);
    static Node* prev = NULL;
    if(prev != NULL && root->data < prev->data){
        if(first == NULL)first = prev;
        second = root;
    }
    prev = root;
    fixBST(root->right);
}

void print(Node *root){
    if(root != NULL){
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
}

int main(){
    Node *root = new Node(18);
    root->left = new Node(60);
    root->left->left = new Node(4);
    // root->left->right = new Node();
    root->right = new Node(70);
    root->right->left = new Node(8);
    root->right->right = new Node(80);
    print(root);
    cout<<"\n";
    fixBST(root);
    swap(first->data, second->data);
    print(root);
}