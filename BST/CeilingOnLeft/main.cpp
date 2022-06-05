#include <bits/stdc++.h>
using namespace std;

void ceilOnLeft(vector<int> v){
    cout<<-1<<" ";
    set<int> s;
    s.insert(v[0]);
    for(int i=1; i<v.size() ; i++){
        set<int>::iterator it = s.lower_bound(v[i]);
        if( it != s.end()) cout<<(*it)<<" ";
        else cout<<-1<<" ";
        s.insert(v[i]);
    }
}

int main(){
    vector<int> v = {2,8,30,15,25,12};
    ceilOnLeft(v);
}

