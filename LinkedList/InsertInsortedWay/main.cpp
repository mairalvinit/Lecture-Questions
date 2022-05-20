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
    cout<<endl;
}

Node *insertInSorted(Node *head , int x){
    Node *temp = new Node(x);
    if(head ==NULL)return temp;

    if(x <= head->data){
        temp->next = head;
        return temp;
    }

    Node *curr = head;    

    while(curr->next != NULL && curr->next->data < x){
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;

}

int main(){
    Node *head = NULL;
    head = insertInSorted(head,20);
    head = insertInSorted(head,10);
    head = insertInSorted(head,30);
    head = insertInSorted(head,50);
    head = insertInSorted(head,45);
    printList(head);
}