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

void printList(Node *head){
    Node *curr = head;
    while(curr!= NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    printList(head);
}   