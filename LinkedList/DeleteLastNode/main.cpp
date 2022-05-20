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


void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node *deleteLastNode(Node *head){
    if(head == NULL ) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != 0){
        curr = curr->next;
    }
        delete (curr->next);
        curr->next = NULL;
    return head;
}

Node *InsertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main(){
    Node *head = NULL;
    head = InsertAtBegin(head,10);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,40);
    printList(head);
    deleteLastNode(head);
    printList(head);
}