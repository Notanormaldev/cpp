#include<iostream>
using namespace std;



int main(){
   int n=6;
   bool isprime=true;
   for(int i=2;i*i<=n;i++){
   if(n%i==0){
     isprime=false;
   }
   }


   if(isprime){
    cout<<"prime num";
   }else{
    cout<<"not prime";
   }
    return 0;
}