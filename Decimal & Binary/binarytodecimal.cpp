#include<iostream>
using namespace std;

int binarytodecimal(int binnum){
    int ans=0; int pow=1;
   while(binnum>0){
      int rem=binnum%10;
      ans+=rem*pow;
      pow*=2;
      binnum/=10;
   }
   return ans;
}




int main(){
    cout<<binarytodecimal(110010);
    return 0;
}