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

    printList(head);

}