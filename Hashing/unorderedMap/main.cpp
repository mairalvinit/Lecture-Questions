#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"vinit" , 100});

    //loop 1
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"------------------------------"<<endl;

    //loop 2
    for(auto it = m.begin() ; it != m.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
cout<<"------------------------------"<<endl;
    //finding in a loop
    if(m.find("ide") != m.end())cout<<"Found "<<m.find("ide")->second<<endl;
    else cout<<"Not Found"<<endl;

cout<<"------------------------------"<<endl;
    //finding using count
    if(m.count("ide") > 0) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;

    //erase function
    m.erase("vinit");

    //erase using an iterator
    m.erase(m.begin());

    cout<<"------------------------------"<<endl;

    for(auto it = m.begin() ; it != m.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}