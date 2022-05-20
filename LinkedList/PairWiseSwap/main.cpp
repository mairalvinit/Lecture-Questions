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

Node *insertBegin(Node *head , int x){
    Node *temp = new Node(x);
    if(head ==NULL) return temp;
    temp->next = head;
    return temp;
}

void printList(Node *head){
    for(Node *curr = head ; curr != NULL ; curr = curr->next){
        cout<<curr->data<<" ";
    }
    cout<<endl;
}


void pairWiseSwap(Node *head){
    Node *curr = head;
    while(curr!=NULL && curr->next !=NULL){
        swap(curr->data , curr->next->data);
        curr = curr->next->next;
    }
}

Node *pairWiseSwap2(Node *head){
    if(head == NULL || head->next == NULL) return head;
    Node *curr = head->next->next;
    Node *prev  = head;
    head = head->next;
    head->next = prev;
    while(curr !=NULL && curr->next !=NULL){
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    prev->next = curr;
    return head;
}


int main(){
    Node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,15);
    head = insertBegin(head,7);
    head = insertBegin(head,2);
    head = insertBegin(head,4);
    head = insertBegin(head,9);
    printList(head);
    head = pairWiseSwap2(head);
    printList(head);   
}