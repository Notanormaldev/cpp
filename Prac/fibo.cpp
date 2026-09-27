#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n>1){
       return fibo(n-1)+fibo(n-2);
    }
    return 1;
}


int main(){
    cout<<fibo(6);
    //0,1,1,2,3,5
    return 0; 
}