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

//Level Order Traversal
void printVerticalLine(Node *root){
    map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;
        mp[hd].push_back(curr->data);
        q.pop();
        if(curr->left != NULL) q.push({curr->left,hd-1});
        if((curr->right != NULL))q.push({curr->right,hd+1});
    }
    for(auto it : mp){
        auto v = it.second;
        for(auto i : v)cout<<i<<" ";
        cout<<"\n";
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    // root->right->left = new Node();
    // root->right->right = new Node();
    printVerticalLine(root);
}