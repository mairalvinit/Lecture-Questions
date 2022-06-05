#include <bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *left,*right;
     int lCount ;
     Node (int x){
          data = x;
          left = right = NULL;
        lCount = 0;
    }
};

Node *insert(Node *root , int n){
    if(root == NULL) return new Node(n);
    if(n < root->data){
        root->left = insert(root->left,n);
        root->lCount++;
    }else if(n > root->data) root->right = insert(root->right , n);
    return root;
}

Node *kthSmallest(Node *root , int k) {
    if(root == NULL) return NULL;
    int count = root->lCount +1;
    if(count == k) return root;
    if(count > k)return kthSmallest(root->left,k);
    return kthSmallest(root->right , k-count);
}


int main(){
   Node *root = NULL;
   int keys[] = {20,8,22,4,12,10,14};
   for(int x : keys)root = insert(root,x);

   int k=4;
   Node *res = kthSmallest(root,k);
   if(res == NULL)cout<<-1<<endl;
   else cout<<"Kth Smallest element is  : "<<res->data<<" ";
}