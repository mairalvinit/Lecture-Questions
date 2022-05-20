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

int preIndex =0;
Node *cTree(int in[] , int pre[] , int is , int ie){
    if(is > ie) return NULL;
    Node *root = new Node(pre[preIndex+1]);

    int inIndex ;
    for(int i = is ; i<=ie ; i++){
        if(in[i] == root->data){
            inIndex = i;
            break;
        }
    }

root->left = cTree(in,pre,is,inIndex-1);
root->left = cTree(in,pre , inIndex+1 , ie);

return root;

}

int main(){
}