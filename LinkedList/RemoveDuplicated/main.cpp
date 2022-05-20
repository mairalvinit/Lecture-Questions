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


void removeDuplicates(Node *head){
    if(head == NULL) return ;
    Node *curr = head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }else{
            curr = curr->next;
        }
    }
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
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,10);
    head = InsertAtBegin(head,10);
    printList(head);
    removeDuplicates(head);
    printList(head);
}
