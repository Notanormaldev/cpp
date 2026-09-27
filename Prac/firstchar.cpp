#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
       hash[s[i]]++;
    }
    
    for(int i=0;i<s.size();i++){
        if(hash[s[i]]==1){
            cout<<s[i];
            return 0;
        }
    }
  return 0;
   
}