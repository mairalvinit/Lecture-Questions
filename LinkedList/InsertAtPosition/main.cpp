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

Node *insertAtPos(Node *head , int x , int pos){
        
        Node *temp = new Node(x);
        if(pos ==1){
            temp->next = head;
            return head;
        }

        Node *curr = head;
        for(int i=0 ; i<pos-2 ; i++){
            curr = curr->next;
        }

        if(curr == NULL) return head;

        temp->next = curr->next;
        curr->next = temp;
        return head;
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    head = insertAtPos(head,15,2);
    printList(head);
}