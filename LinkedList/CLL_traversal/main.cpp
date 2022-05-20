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

    if(head == NULL) return ;

    Node *curr = head;
     cout<<curr->data<<" ";
     curr = curr->next;
    while(curr != head){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

void printList2(Node *head){
    if(head == NULL) return;
    cout<<head->data<<" ";
    for(Node *p = head->next ; p != head ; p = p->next){
        cout<<p->data<<" ";
    }
}

void printList3(Node *head) //using do while loop 
{
    if(head ==NULL ) return ;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr != head);
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printList3(head);
}