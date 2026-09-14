#include<bits/stdc++.h>
using namespace std;

// int c=1;
void fun(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    cout<<"doremon"<<endl;
    // c++;
    fun(i+1,n);
}


int main(){
    int n;
    cin>>n;
    fun(1,n);
    return 0;
}

//first appr - fun(1,n) two vars
//sec appr - count type and count++ //not good