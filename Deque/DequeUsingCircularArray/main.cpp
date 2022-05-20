#include <bits/stdc++.h>
using namespace std;

struct Deque{
    int *arr;
    int front, cap , size;
    Deque(int c){
        cap = c;
        arr = new int[c];
        size=0;
        front=0;
    }
    bool isFull(){return cap==size;}
    bool isEmpty(){return size==0;}
    int getSize(){return size;}

    void deleteFront(){
        if(isEmpty()){return ;}
        front = (front+1)%cap;
        size--;
    }
    void insertRear(int x){
        if(isFull()){return ;}
        int rear = (front+size)%cap;
        arr[rear] = x;
        size++;
    }

    int getFront(){
        if(isEmpty()){return -1;}
        return arr[front];
    }

    void insertFront(int x){
        if(isFull()){return;}
        front = (front+cap-1)%cap;
        arr[front] = x;
        size++;
    }
    void deleteRear(){
        if(isEmpty()){return ;}
        size--;
    }
    int getRear(){
        if(isEmpty()){return -1;}
        return arr[(front+size-1)%cap];
    }
};

int main(){
    Deque q(5);
    q.insertFront(10);
    q.insertRear(20);
    q.insertRear(50);
    q.insertFront(40);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
}