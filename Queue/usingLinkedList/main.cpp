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

struct Queue{
    Node *front  , *rear ;
    int s;
    Queue(){front = NULL;rear = NULL;size =0;}
    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
            s++;
            return;
        } 
        rear->next = temp;
        rear = temp; 
        s++;
    }

    void deque(){
        if(front == NULL) return;
        Node *temp = front;
        front = front->next;
        if(front == NULL){rear = NULL;}
        s--;
        delete temp;
    }

    int getFront(){
        if(front == NULL) return -1;
        return front->data;
    }

    int getRear(){
        if(front == NULL) return -1;
        return rear->data;
    }

    int size(){
        return s;
    }
};

int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout<<queue.getFront()<<endl;
    cout<<queue.getRear()<<endl;
    cout<<queue.size()<<endl;

    queue.deque();
    cout<<queue.getFront()<<endl;
}