#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

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

Node *DeleteHead(Node *head){
    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    int t = head->data;
    
    head->data = temp->data;
    temp->data = t;

    head->next = temp->next;
    delete temp;
    return head;
}

Node *deleteKthNode(Node *head , int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1) return DeleteHead(head);

    Node *curr = head;
    for(int i=0 ; i<k-2 ; i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;

}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printList3(head);
   head = deleteKthNode(head,3);
    printList3(head);
  head = deleteKthNode(head,1);
    printList3(head);
}

