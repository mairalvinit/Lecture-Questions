#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int i = 0 , j = s.length()-1;
    bool res = true;
    while(i<=j){
        if(s[i] != s[j]){
            res = false;
            break;
        }
        i++;
        j--; 
    }
return res;
}

int main(){
    string s = "abcca";
    cout<<boolalpha;
    cout<<isPalindrome(s);
}