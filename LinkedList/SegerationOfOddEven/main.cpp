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

Node *segeregate(Node *head){
    Node *es =NULL , *ee=NULL , *os=NULL , *oe=NULL ;
    for(Node *curr = head ; curr != NULL ; curr = curr->next){
        int x = curr->data;
        if(x%2 ==0){
            if(es == NULL){
                es = curr;
                ee = es;
            }else{
                ee->next = curr;
                ee = ee->next;
            }
        }else{
            if(os == NULL){
                os = curr;
                oe = os;
            }else{
                oe->next = curr;
                oe = oe->next;
            }
        }
    }
    if(os == NULL || oe == NULL) return head;
    ee->next = os;
    oe->next = NULL;
    return es;
}

int main(){
    Node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,15);
    head = insertBegin(head,7);
    head = insertBegin(head,2);
    head = insertBegin(head,4);
    head = insertBegin(head,9);
    printList(head);
    head = segeregate(head);
    printList(head);
}