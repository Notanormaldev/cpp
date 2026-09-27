#include<bits/stdc++.h>
using namespace std;

int fac(int n){
     if(n>0){
       return n*fac(n-1);
    }
    return 1;
}

int main(){
    cout<<fac(3);
    return 0;
}