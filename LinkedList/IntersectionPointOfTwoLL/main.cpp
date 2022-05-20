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

int findIntersection(Node *head1 , Node *head2){
    unordered_set<Node *> s;
    for(Node *curr = head1 ; curr!=NULL ; curr = curr->next){
        s.insert(curr);
    }
    for(Node *curr = head2 ; curr != NULL ; curr =curr->next){
        if(s.find(curr) != s.end()) return curr->data;
    }
return -1;
}

int findIntersection2(Node *head1 , Node *head2){
    int c1=0 , c2=0;
    for(Node *curr=head1 ; curr != NULL ; curr = curr->next)c1++;
    for(Node *curr=head2 ; curr != NULL ; curr = curr->next)c2++;
    int diff = abs(c1-c2);
    Node *curr1 = head1;
    Node *curr2 = head2;
    
        for(int i=1 ; i<=diff ; i++){
            if(c1 >= c2) curr1 = curr1->next;
            else curr2 = curr2->next;
        }

while(curr1 != NULL && curr2 != NULL){
    if(curr1 == curr2) return curr1->data;
    curr1 = curr1->next;
    curr2 = curr2->next;
}
return -1;

}

int main(){
    Node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,15);
    head = insertBegin(head,7);
    head = insertBegin(head,2);
    head = insertBegin(head,4);
    head = insertBegin(head,9);
    
    Node *head2 = NULL;
    head2 = insertBegin(head2,99);
    head2->next = head->next->next->next;
    // printList(head2);
    cout<<findIntersection2(head,head2)<<endl;

}