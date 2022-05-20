#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

bool childrenSumProperty(Node *root){
    if(root == NULL) return true;

    if(root->left == NULL && root->right == NULL) return true;

    int sum=0;
    if(root->left != NULL)sum+=root->left->data;
    if(root->right != NULL)sum+=root->right->data;

    return (root->data == sum && childrenSumProperty(root->left) && childrenSumProperty(root->right));

}

int main(){
    Node *root  = new Node(10);
    root->left = new Node(4);
    root->right = new Node(6);
    root->right->left = new Node(3);
    root->right->right = new Node(3);
    cout<<childrenSumProperty(root);
}