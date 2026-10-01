#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    if(n<2){
        cout<<"not prime";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        cout<<"not prime";
        return 0;
      }
    }
    cout<<"prime";
}