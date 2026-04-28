#include<iostream>

using namespace std;


int main(){
    int isprime =true;
    int n;
    cout<<"check num is prime or not\n";
    cout<<"enter the num:\n";
    cin>>n;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
           isprime =false;
        }  
    }
   if(isprime==true){
    cout<<"prime";
   }else{
    cout<<"not prime";
   }
    return 0;
}