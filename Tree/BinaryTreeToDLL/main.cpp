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


// Node* prev = NULL;
Node *BTToDLL(Node *root ){
    //Idea is to use Inorder Traversal
    if(root == NULL) return root;
    static Node *prev = NULL;
    Node *head = BTToDLL(root->left);
    if(prev == NULL){head = root;}
    else{
        root->left = prev;
        prev->right = root;  
    } 
    prev = root;
    BTToDLL(root->right );
    return head;
}

void printDLL(Node *head){
    if(head == NULL) return;
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->right; 
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node *head = BTToDLL(root);
    printDLL(head);
}