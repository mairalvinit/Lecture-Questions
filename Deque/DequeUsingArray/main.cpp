#include <bits/stdc++.h>
using namespace std;

struct Deque{
    int size , cap;
    int *arr;
    Deque(int c){
        cap = c;
        size =0;
        arr = new int[c];
    }
    bool isFull(){return cap == size;}
    bool isEmpty(){return size==0;}
    int getSize(){return size;}
    void insertRear(int x){
        if(isFull()){return;}
        arr[size] = x;
        size++;
    }
    void deleteRear(){
        if(isEmpty()){return;}
        size--;
    }
    int getRear(){
        if(isEmpty()){return -1;}
        return arr[size-1];
    }

    void insertFront(int x){
        if(isFull()){return;}
        for(int i=size-1 ; i>=0 ; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void deleteFront(){
        if(isEmpty()) return;
        for(int i=1 ; i<=size ; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }

    int getFront(){
        if(isEmpty()) return -1;
        return arr[0];
    }
};

int main(){
    Deque q(5);
    q.insertRear(10);
    q.insertFront(20);
    q.insertRear(30);
    q.insertFront(40);
    cout<<q.getSize()<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.deleteFront();
    cout<<q.getFront()<<endl;
}