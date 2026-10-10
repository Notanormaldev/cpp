#include<bits/stdc++.h>
using namespace std;

char freq(string s){
    int freq[256]={0};

    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }

    for(int i=0;i<s.size();i++){
         if(freq[s[i]]==1){
            return s[i];
         }
    }

    return '#';
}




int main(){
    string s="aaabcbd";
    cout<<freq(s);
    return 0;
}