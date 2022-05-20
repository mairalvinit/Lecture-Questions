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


Node *reverseInsizes(Node *head , int k){
    Node *curr = head , *next = NULL , *prev = NULL;
    int count =0;
    while(curr != NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        Node *restHead = reverseInsizes(next,k);
        head->next = restHead;
    }
    return prev;
}


Node *InsertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    head = InsertAtBegin(head,16);
    head = InsertAtBegin(head,15);
    head = InsertAtBegin(head,14);
    head = InsertAtBegin(head,13);
    head = InsertAtBegin(head,12);
    head = InsertAtBegin(head,11);
    head = InsertAtBegin(head,10);
    printList(head);
    head = reverseInsizes(head,2);
    printList(head);
}
