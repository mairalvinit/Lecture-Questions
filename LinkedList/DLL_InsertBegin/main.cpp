#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *InsertBegin(Node *head , int x){
    Node *temp = new Node(x);
    if(head==NULL) return temp;
     temp->next = head;
     head->prev = temp;
     return temp;
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){
    Node *head = NULL;
    head = InsertBegin(head,10);
    head = InsertBegin(head,20);
    head = InsertBegin(head,30);
    printList(head);
}