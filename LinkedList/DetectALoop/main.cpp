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

bool isLoop(Node *head){
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while(fast!=NULL && fast->next != NULL){
        
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            flag = true;
            break;
        }
    }
return flag;
}


bool isLoop2(Node *head){
    Node *temp = new Node(INT_MAX);
    if(head ==NULL ) return false;
    Node *curr = head,*next = NULL;
    while(curr != NULL){
        if(curr->next == NULL) return false;
        if(curr->next == temp) return true;
        next = curr->next;
        curr->next = temp;
        curr = next;
    }
    return false;
}

bool isLoop3(Node *head){
    unordered_set <Node *> set;
    Node *curr = head;
    while(curr != NULL){
        if(set.find(curr) != set.end()) return true;
        set.insert(curr);
        curr = curr->next;
    }
    return false;
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

int main(){
    Node *head = NULL;
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,30);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,20);
    head = InsertAtBegin(head,10);
    head = InsertAtBegin(head,10);

     head->next->next->next->next = head->next;

    // printList(head);
    cout<<boolalpha;
    cout<<isLoop(head)<<endl;
}
