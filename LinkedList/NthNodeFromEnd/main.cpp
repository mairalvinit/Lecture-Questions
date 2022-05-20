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

void printKthNodeFromEnd(Node *head , int k){
    if(head == NULL) return;
    Node *curr = head;
    int count=0;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    if(count < k) return ;
    Node *temp = head;
    for(int i=1 ; i<=count-k ; i++){
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

void printKthNodeFromEnd2(Node *head , int k){
    if(head ==NULL) return ;
    Node *first =head;
    for(int i=0 ; i<k ; i++){
        if(first==NULL) return ;
        first = first->next;
    }
    Node *second = head;
    while(first!=NULL){
        first = first->next;
        second = second->next;
    }
    cout<<second->data<<endl;
}

Node *InsertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main(){
    Node *head = NULL;
    head = InsertAtBegin(head,12);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,32);
    head = InsertAtBegin(head,15);
    head = InsertAtBegin(head,25);
    head = InsertAtBegin(head,120);
    head = InsertAtBegin(head,56);
    printKthNodeFromEnd2(head,2);
}
