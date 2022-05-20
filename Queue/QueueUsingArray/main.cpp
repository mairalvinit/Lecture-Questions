#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int size , cap;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr  = new int[cap];
    }
    bool isFull(){return size==cap;}
    bool isEmpty(){return size==0;}
    void enqueue(int n){
        // if(isEmpty()) return; 
        arr[size] = n;
        size++;
    }

    void dequeue(int n){
        if(isEmpty()) return ;
        for(int i=0 ; i<size-1 ; i++) arr[i] = arr[i+1];
        size--;
    }
    int getFront() { 
        if(isEmpty()) return -1;
        return arr[0];
        }
    int getRear(){
        if(isEmpty()) return -1;
        return arr[size-1];
        }
    int sizeq(){return size;}

};

int main(){
    Queue q(5);
    q.enqueue(10) ;
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.sizeq()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
}