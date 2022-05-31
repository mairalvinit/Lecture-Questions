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

int findFloor(Node *root , int n){
    if(root == NULL) return 0;
    int res=0;
    while(root != NULL){
        if(root->data == n) return root->data;
        else if(root->data > n) root = root->left;
        else if(root->data < n) {
            res = max(res,root->data);
            root = root->right;
            }
    }
return res;
}

int main(){
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);
    cout<<findFloor(root,72);
}