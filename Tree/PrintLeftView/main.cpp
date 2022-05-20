#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        left = right  = NULL;
    }
};


int maxLevel=1;
void printLeft(Node *root,int level){
    if(root == NULL) return;
    if(level > maxLevel){
        cout<<root->key<<" ";
        maxLevel=level;
    }
    printLeft(root->left , level+1);
    printLeft(root->right , level+1);
}

void printLeftIterative(Node *root){
    if(root == NULL) return;
    queue <Node *> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
            for(int i=0 ; i<count ; i++){
                Node *curr = q.front();
                q.pop();
                if(i==0){
                    cout<<curr->key<<" ";   
                }
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
        }
    }
}

int main(){
    Node *root  = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    printLeftIterative(root);
}