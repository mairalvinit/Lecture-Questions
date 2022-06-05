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

vector<int> res;

void Inorder(Node *root){
    if(root != NULL){
        Inorder(root->left);
        res.push_back(root->data);
        Inorder(root->right);
    }
}

bool isSum(Node *root , int n){
    vector<int> ans;
    Inorder(root);
    ans = res;
    res.clear();
    int i=0 , j = ans.size()-1;
    while(i<j){
        int sum = ans[i] + ans[j];
        if(sum == n) return true;
        else if(sum>n)j--;
        else i++;
    }
return false;
}

//Efficient using Hash Table
bool isPairSum(Node *root , int sum , unordered_set<int> &s){
    if(root==NULL) return false;
    if(isPairSum(root->left,sum,s)==true)return true;
    if(s.find(sum - root->data) != s.end()) return true;
    else {
        s.insert(root->data);
    }
    return isPairSum(root->right,sum,s);
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(11);
    root->right->right = new Node(30);
    root->right->right->left = new Node(25);
    unordered_set<int> s;
    cout<<isPairSum(root,340,s)<<endl;
}