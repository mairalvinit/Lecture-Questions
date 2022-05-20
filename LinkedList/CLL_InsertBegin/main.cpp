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
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    Node *curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    temp->next = head;
    curr->next = temp;
    return temp;
}

Node *insertBegin2(Node *head ,int x){
    Node *temp = new Node(x);
    if(head ==NULL){
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
    return head;
}

void printList3(Node *head) //using do while loop 
{
    if(head ==NULL ) return ;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr != head);
cout<<endl;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printList3(head);
    head = insertBegin2(head,40);
printList3(head);
}