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

void printInSpiral(Node *root){
    queue<Node *>q;
    q.push(root);
    int count = 1;
    while(q.empty() == false){
        int sz=  q.size();
        for(int i=0 ; i<sz ; i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
    count++;
    }
}

int main(){
        Node *root  = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printInSpiral(root);
}