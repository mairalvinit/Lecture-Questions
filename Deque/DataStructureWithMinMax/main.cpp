#include <bits/stdc++.h>
#include <deque>
using namespace std;

struct DS{
    deque<int> dq;
    int currMin , currMax;
    void insertMin(int x){

        if(dq.empty()){
            currMin = currMax = x;
            return;
        }

        if(x < currMin) {
            dq.push_front(x);
            currMin = x;
            }
        else return;
    }
    void insertMax(int x){
        if(dq.empty()){
            currMin = currMax = x;
            return;
        }
        if(x >= currMax) {
            dq.push_back(x);
            currMax = x;
        }else return;
    }

    int getMin(){
        return dq.front();
    }

    int getMax(){
        return dq.back();
    }

    void extractMin(){
        if(dq.empty()) return;
        dq.pop_front();
    }

    
    void extractMax(){
        if(dq.empty()) return;
        dq.pop_back();
    }
};

int main(){
    struct DS s;
    s.insertMin(12);
    s.insertMin(2);
    s.insertMax(33);
    cout<<s.getMin()<<" "<<s.getMax()<<endl;
}