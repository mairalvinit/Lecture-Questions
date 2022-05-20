#include <bits/stdc++.h>
using namespace std;

//Implementation of chaining
struct MYHash{
    int BUCKET;
    table<int> *table;
    MYHash(int b){
        BUCKET = b;
        table  = new list<int> [b];
    }

    void insert(int key){
        int i = key%BUCKET;
        table[i].push_back(key);
    }

    void remove(int key){
        int i = key%BUCKET;
        table[i].remove(key);
    }

    bool Search(int key){
        int i = key%BUCKET;
        for(auto x : table[i]){
            if(x == key) return true;
        }
        return false;
    }

}

int main(){
    MYHash(5);
}