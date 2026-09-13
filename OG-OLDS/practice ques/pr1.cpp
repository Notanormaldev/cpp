#include<iostream>
using namespace std;



int main(){
    int n=10;int sum=0;
   for(int i=1;i<=n;i++){
     if(i%3==0){
        sum+=i;
     }
   }
    cout<<sum;
    return 0;
}