#include<bits/stdc++.h>
using namespace std;




int main(){
  int n;
  cin>>n;

  int og=n;
  int sum=0;

while(n>0){
    int ld=n%10;
    sum=sum+ld*ld*ld;
    n=n/10;
  }
  if(og==sum) cout<<"arm";
  else cout<<"not arm";

}