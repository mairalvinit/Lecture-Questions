#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string  &s1 , string  &s2) {
    int i=0 , j=0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }
    return (j == s2.length());
}

bool isSub(string &s1 , string &s2 , int n , int m){
    if(m==0) return true;
    if(n==0) return false;
    if(s1[n-1] == s2[m-1]){
        return isSub(s1,s2,n-1,m-1);
    }else{
        return isSub(s1,s2,n-1,m);
    }
}

int main(){
    string s1 = "geeksforgeeks";
    string s2 = "gfgs";
    cout<<boolalpha;
    cout<<isSub(s1,s2,s1.length(),s2.length());
}