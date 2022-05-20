#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int leftNonRepeating(string &s){
    unordered_map<char,int> m;
    for(int i=0 ; i<s.length() ; i++){
        m[s[i]]++;
    }
    for(int i=0 ; i<s.length() ; i++){
        if(m.find(s[i])->second == 1) return i;
    }

    // cout<<m.count('z')<<endl;

    return 0;
}

int leftNonRepeating2(string &s){
    int count[CHAR] = {0};
    for(int i=0 ; i<s.length() ; i++){
        count[s[i]]++;
    }
    for(int i=0 ; i<s.length() ; i++){
        if(count[s[i]] == 1) return i;
    }
    return -1;
}

int leftNonRepeating3(string &s){
    int fi[CHAR];
    fill(fi , fi+CHAR , -1);
    for(int i=0 ; i<s.length() ; i++){
        if(fi[s[i]] == -1) fi[s[i]] = i;
        else fi[s[i]] = -2;
    }

    int res = INT_MAX;
    for(int i=0 ; i<CHAR ; i++){
        if(fi[i] >= 0) res = min(res,fi[i]);
    }

    return (res == INT_MAX) ? -1 : res;
}


int main(){
    string s = "geeksforgeeks";
    cout<<leftNonRepeating3(s);
}