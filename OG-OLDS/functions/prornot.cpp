#include<iostream>
using namespace std;


bool prime(int n){
  bool isprime =true;

  for(int i=2;i*i<=n;i++){
    if(n%i==0){
        isprime=false;
    }
  }
  if(isprime){
    cout<<"prime";
  }else{
    cout<<"prime not";
  }
  return isprime;

}
int primee(int n){
    for(int i=2;i<=n;i++){
        bool isp =true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isp = false;
            }
        }
        if(isp){
            cout<<i;
        }
    }

    
    return 0;
}
int fibo(int n){
    int a=0;
    int b=1;
   for(int i=0;i<=n;i++){
    cout<<a;
     int c=a+b;
     a=b;
     b=c;

   }

}
int main(){
//  cout<<prime(8);
//   primee(10);
  fibo(10);
    return 0;
}