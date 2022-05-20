#include <bits/stdc++.h>
using namespace std;

//unordered set dows not maintain any order of the input elements
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;

    if(s.find(15) == s.end())cout<<"not found"<<" " <<endl;
    else cout<<"found "<<*(s.find(15))<<endl;

    if(s.count(1) == 1) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

    s.erase(20);
for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    s.clear();
    cout<<s.size()<<endl;
    return 0;
}