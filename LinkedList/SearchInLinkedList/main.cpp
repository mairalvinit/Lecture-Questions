#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int search(Node *head , int x){
   int pos=1;
    Node *curr = head;
    while(curr != NULL){
        if(curr->data == x) return pos;
        curr = curr->next;
        pos++;
    }
    return -1;
}

int searchRec(Node *head , int x){
    if(head == NULL )return -1;
    if(head->data == x)return 1;
    else{
        int res = searchRec(head->next , x);
        if(res == -1) return -1;
        else return res+1;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout<<searchRec(head,4);

}