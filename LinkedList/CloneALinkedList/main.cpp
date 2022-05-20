#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *random;
    Node(int x){
        data = x;
        next = random = NULL;
    }
}

Node *cloneList(Node *head){
    
}