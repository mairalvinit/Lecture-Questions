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

int ceil(Node *root , int n){
    if(root == NULL ) return 0;
    int res=INT_MAX;
    while(root != NULL){
        if(root->data == n) return root->data;
        else if(root->data > n) {
            res = min(res,root->data);
            root = root->left;
        }else if(root->data < n) root = root->right;
    }
return res;
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(30);
    cout<<ceil(root,14);
}