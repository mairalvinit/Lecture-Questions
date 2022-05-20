#include <bits/stdc++.h>
using namespace std;

void patternSearch(string &txt , string &pattern){
    int m = pattern.length();
    int n = txt.length();

    for(int i=1 ; i<=n-m ; i++){
        string temp = txt.substr(i,i+3);
        cout<<temp<<endl;
    }

}

int main(){
    string txt = "AAAAAAAAA";
    string pat = "ABCD";
    patternSearch(txt,pat);
}