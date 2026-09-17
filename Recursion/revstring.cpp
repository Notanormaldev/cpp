#include<bits/stdc++.h>
using namespace std;

bool checkstring(int i,string &s){
  if(i>=s.size()/2) return true;
  if(s[i]!=s[s.size()-i-1]) return false;
  return checkstring(i+1,s);
}

int main(){
    string s="MADAM";
    cout<<checkstring(0,s);
    return 0;
}