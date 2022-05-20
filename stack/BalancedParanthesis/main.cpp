#include <bits/stdc++.h>
using namespace std;

bool matching(char x , char y){
    return ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']') );
}

bool verifyBrackets(string &str){
    stack<char> s;
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            s.push(str[i]);
        }else{

            if(s.empty() == true) return false;
            else if(matching(s.top() , str[i]) == false) return false;
            else s.pop();
        }
    }
return (s.empty()==true);
}

int main(){
    string s = "{()}[](";
    if(verifyBrackets(s)) cout<<"Balanced"<<endl;
    else cout<<"Not Balanced"<<endl;
}