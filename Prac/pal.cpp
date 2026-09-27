#include<bits/stdc++.h>
using namespace std;




int main(){
   int n;
   cin>>n;
   int og=n;
    int sum=0;
   while(n>0){
    int ld=n%10;
    sum=sum*10+ld;
    n/=10;
   }
   cout<<og<<endl;
   cout<<sum<<endl;
}