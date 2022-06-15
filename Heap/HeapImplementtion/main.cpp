#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int capacity;
   public : 
    MinHeap(int c){
        arr = new int[c];
        size=0;
        capacity=c;
    }
    int left(int i){return (2*i+1);}
    int right(int i){return (2*i +2);}
    int parent(int i){return ((i-1)/2) ;}

    void insert(int x){
        if(size == capacity) return;
        size++;
        arr[size-1] = x;
        for(int i=size-1 ; i!=0 && arr[parent(i)] > arr[i] ;){
            swap(arr[i] , arr[parent(i)]);
            i = parent(i);
        }
    }

    void printHeap(){
        for(int i=0 ; i<size ; i++){
            cout<<arr[i]<<" ";
        }
    }

    void minHeapify(int i){
        int lt = left(i) , rt = right(i);
        int smallest = i;
        if(lt < size && arr[lt] < arr[smallest])smallest = lt;
        if(rt < size && arr[lt] < arr[smallest])smallest = rt;

        if(smallest != i){
            swap(arr[i] , arr[smallest]);
            minHeapify(smallest);
        }
    }

    int extractMin(){
        if(size ==0 ) return INT_MAX;
        if(size ==1){
            size--;
            return arr[0];
        }
        swap(arr[0] , arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

    void decreaseHeap(int i , int x){
        arr[i] = x;
        while(i!=0 && arr[parent(i)] > arr[i]){
            swap(arr[i] , arr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteKey(int i){
        if(i >size) return;
        arr[i] = INT_MIN;
        while(i!=0 && arr[parent(i)] > arr[i]){
            swap(arr[i] , arr[parent(i)]);
            i = parent(i);
        }
        extractMin();
        minHeapify(i);
    }

    void buildHeap(){
        for(int i = (size-2)/2 ; i>=0 ; i--){
            minHeapify(i);
        }
    }
};

int main(){
    MinHeap h(5);
    h.insert(5);
    h.insert(7);
    h.insert(3);
    h.insert(8);
    h.insert(1);
    //h.printHeap();
    // cout<<h.extractMin()<<endl;
    // h.decreaseHeap(3,2);
    h.deleteKey(2);
    h.printHeap();

}