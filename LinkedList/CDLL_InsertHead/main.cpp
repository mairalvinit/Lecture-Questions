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
    if(head ==NULL ) return ;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr != head);
cout<<endl;
}

Node *insertBegin(Node *head , int x){
    Node *temp = new Node(x);
    if(head ==NULL){
        temp->prev = temp;
        temp->next = temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;

}

int main(){
    
}