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

Node *getSucc(Node *curr){
    curr = curr->right;
    while(curr != NULL && curr->left != NULL) curr = curr->left;
    return curr;
}

Node *deleteBST(Node *root , int n){
    if(root == NULL) return root;
    if(root ->data > n) root->left = deleteBST(root -> left,n);
    else if(root->data < n) root->right = deleteBST(root -> right,n);
    else {
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = getSucc(root);
            root->data = succ->data;
            root->right = deleteBST(root->right , succ->data);
        }
    }
    return root;
}

Node *insert(Node *root , int n){
    if(root == NULL) return new Node(n);
    else if(root->data < n) root->right = insert(root->right,n);
    else if(root->data > n) root->left = insert(root->left,n);
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
 root = insert(root,10);
 root = insert(root,8);
 root = insert(root,18);
 root = insert(root,16);
 root = insert(root,20);
Inorder(root);
root = deleteBST(root,10);
cout<<endl;
Inorder(root);
}