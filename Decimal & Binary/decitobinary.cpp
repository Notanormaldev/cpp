#include<iostream>
using namespace std;

int dectobinary(int decnum){
    int ans=0; int pow=1;


    while(decnum>0){
        int rem=decnum%2;
        decnum/=2;

        ans+=rem*pow;
        pow*=10;
    }
    return ans;
}



int main(){
   cout<< dectobinary(50);
    return 0;
}