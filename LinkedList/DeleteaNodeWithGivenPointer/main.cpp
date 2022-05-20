#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next = NULL;
    }
};

void deleteNode(Node *N){
    Node *tempN = N->next;
    N->data = tempN->data;
    N->next = tempN->next;
    delete tempN;
}
    
void printList(Node *head){
    Node *curr  = head;
    while(curr != NULL){
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}

int main(){
    Node *head = new Node(10);
   Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
     Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    deleteNode(temp2);
    printList(head);
}