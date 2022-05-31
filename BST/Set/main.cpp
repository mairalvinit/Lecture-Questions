#include <iostream>
#include <set>

using namespace std;

//user defined data types
struct Test{
    int x;
    bool operator<(const Test &t) const{
        return (this->x < t.x);
    }
};

int main(){
    set<Test> s;
    s.insert({10});
    s.insert({5});
    s.insert({20});

    for(set<int>::iterator it = s.begin() ; it !=s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
      for(auto it = s.rbegin() ; it !=s.rend() ; it++){
        cout<<*it<<" ";
    }

    auto at = s.find(12);
    auto t = s.count(*at);
    cout<<t<<endl;

    cout<<s.size()<<endl;
    // s.clear();
    // s.erase(5);
    // cout<<s.size()<<endl;

//lower bound 

auto it = s.upper_bound(6);
if(it !=s.end()){
    cout<<(*it)<<" ";
}else cout<<"element is smaller than the smallest element. ";

//upper bound
    // auto it2 = s.upper_bound(5);
    // if(it2 !=s.end())cout<<(*it2)<<" ";
    // else cout<<"element is greater than the greatest element";

    return 0;
}

