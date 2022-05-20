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


void detectAndRemoveLoop(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast->next != NULL && fast !=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) break;
    }
    if(slow != fast) return ;

    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}


Node *InsertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int lengthOftheLoop(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast->next != NULL && fast !=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) break;
    }
    if(slow != fast) return 0;

    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    int count =0;
    do{
        fast = fast->next;
        count++;
    }while(fast->next != slow);

    return count+1;
}

int main(){
    Node *head = NULL;
    head = InsertAtBegin(head,4);
    head = InsertAtBegin(head,3);
    head = InsertAtBegin(head,2);
    head = InsertAtBegin(head,1);
    head = InsertAtBegin(head,5);
//  printList(head);
     head->next->next->next->next->next = head->next->next->next;
     cout<<lengthOftheLoop(head)<<endl;
        detectAndRemoveLoop(head);
        printList(head);
    // cout<<lengthOftheLoop(head);
}
