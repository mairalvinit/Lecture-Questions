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

void BottomView(Node *root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;
        mp[hd] = (curr->data);
        q.pop();
        if(curr->left != NULL) q.push({curr->left,hd-1});
        if((curr->right != NULL))q.push({curr->right,hd+1});
    }
    for(auto it : mp){
        cout<<it.second<<" ";
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    root->right = new Node(50);
     root->right->left = new Node(60);
    // root->right->right = new Node(70);
    BottomView(root);   
}