#include<bits/stdc++.h>
using namespace std;


void fun(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    cout<<"doremon"<<endl;
    fun(i+1,n);
}


int main(){
    int n;
    cin>>n;
    fun(1,n);
    return 0;
}