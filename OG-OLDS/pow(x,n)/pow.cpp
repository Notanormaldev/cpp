#include<iostream>
using namespace std;


double pow(double x,int n){
    if(x==0) return 0.00;
    if(x==1) return 1.00;
    if(n==0) return 1.00;
    if(x==-1 & n%2==0) return 1.00;
    if(x==-1 & n%2!=0) return -1;
    
    double ans=1;
    long binaform = n;
     if(n<0){
        x=1/x;
        binaform=-binaform;
     }
     
     while(binaform>0){
        if(binaform%2==1){
            ans*=x;
        }
        x*=x;
        binaform/=2;
     }
     return ans;
}


int main(){
   double x=2.0000;
   int n=10;
   cout<<pow(x,n);
    return 0;
}