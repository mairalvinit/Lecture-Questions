#include <bits/stdc++.h>
using namespace std;

 string reverse(string &s){
     string temp="";
     vector<string> str;
     for(int i=0 ; i<s.length() ; i++){
         if(isspace(s[i])){
             str.push_back(temp);
             temp = "";
             continue;
         }
         if(i== s.length()-1){
             temp+=s[i];
             str.push_back(temp);
             break;
         }

         temp+=s[i];
     }
    string res="";
    for(int i = str.size()-1 ; i>=0 ; i--){
        res  = res + str[i] + " ";
    }
    return res;

 }

 //using stack
    string rev(string &s , int low , int high){
        while(low<=high){
            swap(s[low],s[high]);
            low++;
            high--;
        }
        return s;
    }

 string reverse2(string &s ){
     int n = s.length();
    int start=0;
    for(int end=0 ; end<s.length() ; end++){
        if(s[end]==' '){
            rev(s,start,end-1);
            start = end+1;
        }
    }
    rev(s,start,n-1);
    rev(s,0,n-1);
    return s;
 }

 int main(){
     string s = "hello vinit mairal";
    cout<<reverse2(s);
 }