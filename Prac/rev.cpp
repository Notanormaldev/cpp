#include<bits/stdc++.h>
using namespace std;

int  rev(int n){

    long long rev=0;

    while(n!=0){
       int lastdgt=n%10;
       rev=rev*10+lastdgt;
       n=n/10;
    }
    if(rev<INT_MIN  || rev>INT_MAX) return 0;
    return rev;
}

int main(){
    int n=-1234;
    cout<<rev(n);
    return 0;
}