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

//Inorder traverasal

void VSum(Node *root , int hd,map<int,int> &m){
    if(root == NULL) return;
    VSum(root->left,hd-1,m);
    m[hd]+=root->data;
    VSum(root->right,hd+1,m);
}

void func(Node *root){
    map<int,int> m;
    VSum(root,0,m);
    for(auto sum : m)cout<<sum.second<<" ";
}

int main() {
     Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(11);
    root->right->right = new Node(30);
    root->right->right->left = new Node(25);
    func(root);
}