#include<iostream>
using namespace std;


int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n,int r){
    int n1=factorial(n);
    int r1=factorial(r);
    int nmr=factorial(n-r);
     
    int ncr = n1 / ( r1 * nmr);
    return ncr;
}


int main(){
   cout<<ncr(8,2);

    return 0;
}