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

void printMiddle(Node *head){
    Node *curr = head;
    int count =0 ;
    while(curr!= NULL){
        curr = curr->next;
        count++;
    }
    curr = head;
    for(int i=0 ; i<count/2 ; i++){
        curr = curr->next;
    }
    cout<<curr->data<<endl;
}

void  printMiddle2(Node *head){
    if(head == NULL) return ;
    Node *slow = head , *fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
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
    printMiddle2(head);
}