#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void printAtK(Node *root , int k){
    if(root == NULL) return;
    if(k==0) cout<<(root->data)<<" ";
    else{
        printAtK(root->left , k-1);
        printAtK(root->right , k-1);
    }
}

int main(){
    Node *root  = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    printAtK(root,2);
}
