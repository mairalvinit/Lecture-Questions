#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,int> m;
    m.insert({10,200});
    m[5] = 100;
    m.insert({3,300});
    m[40];
    m.at(5) = 40;
    // for(auto x : m)cout<<x.first<<" "<<x.second<<endl;
    
    // for(map<int,int>::iterator it = m.begin() ; it != m.end() ; ++it)cout<<it->first<<" "<<it->second<<endl;

    // cout<<m.size()<<"\n";

// auto it = m.find(35);
// if(it != m.end())cout<<(*it).first<<" "<<(*it).second<<endl;
// else cout<<"Value not found \n";

auto it = m.lower_bound(11);
if(it != m.end())cout<<(*it).first<<" "<<(*it).second<<endl;
else cout<<"No greater Value"<<endl;

m.erase(m.find(40));
cout<<m.size()<<endl;

}