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


Node *InsertEnd(Node *head , int x){
    Node *temp = new Node(x);
    if(head == NULL) return temp;
    Node *curr  = head;
    while(curr->next != NULL){
       curr =  curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){
    Node *head = NULL;
    head = InsertEnd(head,10);
    head = InsertEnd(head,20);
    head = InsertEnd(head,30);
    printList(head);
}