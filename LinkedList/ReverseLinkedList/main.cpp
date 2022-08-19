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


Node *InsertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *reverse(Node *head){
    Node *head2 = NULL;
    Node *curr = head;
    while(curr!=NULL){
        head2 = InsertAtBegin(head2,curr->data);
        curr = curr->next;
    }
    return head2;
}

Node *reverse2(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        Node *next= curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
return prev;
}

Node *reverseRecursive(Node *head){
    if(head ==NULL || head->next == NULL) return head;
    Node *restHead = reverseRecursive(head->next);
    Node *restTail = head->next;
    restTail->next = head;
    head->next = NULL;
    return restHead;
}

Node *reverseRecursive2(Node *curr , Node *prev){
    if(curr == NULL) return prev;
    Node *next = curr->next;
    curr->next = prev;
    return reverseRecursive2(next,curr);
}

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int reverseList(Node *curr , Node *prev){
    if(curr == NULL) return prev;
    Node *next  = curr->next;
    curr->next = prev;
    reverseList(next,prev);

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
    printList(head);
    head = reverseRecursive2(head,NULL);
    printList(head);

}
