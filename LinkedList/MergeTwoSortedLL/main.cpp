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

Node *mergeLists(Node *a , Node *b){

    if(a == NULL)return b;
    if(b == NULL)return a;

    Node *head = NULL;
    Node *tail = NULL;

    if(a->data <= b->data){
        head = tail= a;
        a = a->next;
    }else{
        head = tail = b;
        b = b->next;
    }


    while(a != NULL && b!=NULL){
        if(a->data <= b->data){
            tail->next = a;
            tail = a;
            a = a->next;
        }else{
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }

if(a== NULL) tail->next = b;
else tail->next =a;

return head;
}


int main(){
    Node *head = NULL;
    head = insertBegin(head,19);
    head = insertBegin(head,15);
    head = insertBegin(head,9);
    head = insertBegin(head,7);
    head = insertBegin(head,5);
    head = insertBegin(head,2);
printList(head);
    Node *head2 = NULL;
    head2 = insertBegin(head2,18);
    head2 = insertBegin(head2,8);
    head2 = insertBegin(head2,3);
    head2 = insertBegin(head2,1);
printList(head2);
    Node *newhead = NULL;
    newhead = mergeLists(head,head2);
    printList(newhead);
} 