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

void printLevelOrder(Node *root){
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left !=NULL)q.push(curr->left);
        if(curr->right !=NULL)q.push(curr->right);
    }
}

//Method 2
void LevelOrderTraversal(Node *root){
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i=0 ; i<count ; i++){
            Node *curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right !=NULL)q.push(curr->right);
        }
        cout<<"\n";
    }
}

int main(){
    Node *root  = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    LevelOrderTraversal(root);
}