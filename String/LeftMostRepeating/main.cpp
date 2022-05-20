#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

int leftMostRepeating(string &s){
    for(int i=0 ; i<s.length() ; i++){
        for(int j=i+1 ; j<s.length() ; j++){
            if(s[i] == s[j]) return i;
        }
    }
return -1;
}

int leftMostRepeating2(string &s){
    int count[CHAR] = {0};
    for(int i=0 ; i<s.length() ; i++){
        count[s[i]]++;
    }
    for(int i=0 ; i<s.length() ; i++){
        if(count[s[i]]>1) return i;
    }
    return -1;
}

int leftEfficient(string &s){
    int findex[CHAR];
    fill(findex,findex+CHAR,-1);
    int res = INT_MAX;
    for(int i=0 ; i<s.length() ; i++){
        int fi = findex[s[i]];
        if(fi == -1){
            findex[s[i]] = i;
        }else{
            res = min(res,fi);
        }
    }
return res;
}

int leftEfficient2(string &s){
    bool visited[CHAR];
    fill(visited,visited+CHAR , false);
    int res = -1;
    for(int i=s.length()-1 ; i>=0 ; i--){
        if(visited[s[i]]) res = i;
        else visited[s[i]] = true;
    }
return res;
}

int main(){
    string s = "geeks";
    cout<<leftEfficient2(s);
}