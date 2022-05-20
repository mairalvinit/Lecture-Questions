#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int x){
        data = x;
        left = right = NULL;
    }
};

int height(Node *root){
    if(root == NULL) return 0;
    return max(height(root->left),height(root->right)) + 1;
}

bool isBalanced(Node *root){
    if(root == NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
     return (abs(lh-rh) <= 1 && isBalanced(root->left) && isBalanced(root->right));
}

int isBalanced2(Node *root){
    if(root == NULL) return 0;

    int lh = isBalanced2(root->left);
    if(lh == -1)return -1;

    int rh = isBalanced2(root->right);
    if(rh == -1)return -1;

    if(abs(rh-lh) >1) return -1;
    else return (max(lh,rh) +1);

}

int main(){
    Node *root  = new Node(8);
    root->left = new Node(12);
    root->left->right = new Node(14);
    root->left->left = new Node(13);
    root->right = new Node(15);
    root->right->right = new Node(16);
    root->right->right->right = new Node(17);
    cout<<isBalanced2(root)<<endl;
}