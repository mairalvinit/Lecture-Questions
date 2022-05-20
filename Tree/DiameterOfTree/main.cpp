#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int _data){
        data = _data;
        left = right = NULL;
    }
};

int height(Node *root){
    if(root == NULL) return 0;
    return max(height(root->left) , height(root->right))+1;
}

int diameterOfTree(Node *root){
    if(root == NULL) return 0;

   int lh = height(root->left);
    int rh = height(root->right);
    
    return max(lh+rh+1 , max(diameterOfTree(root->left) , diameterOfTree(root->right)));
}

int res =0 ;
int height2(Node *root){
    if(root == NULL) return 0;
    int lh = height2(root->left);
    int rh = height2(root->right);
    res = max(lh+rh+1 , res);
    return  1 + max(lh,rh);
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);

    cout<<height2(root)+1;
}
