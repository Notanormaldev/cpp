#include<iostream>
using namespace std;


void hello(){
    cout<<"hello";
}
int num(){
    return 1;
}
int sum(int a ,int b){
    return a+b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}


int main(){ 
   cout<< sum(1,2);
   cout<<min(10,15);
   hello();
   hello();
   int val =num();
   cout<<val;
    return 0;
}