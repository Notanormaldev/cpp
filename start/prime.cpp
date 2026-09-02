#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int c=0;
     bool doremon=true;
     for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
            doremon=false;
        }
    }

    cout<<doremon;
    if(c==0){
        cout<<"is prime";
    }else{
        cout<<"not prime";
    }

    return 0;
}
