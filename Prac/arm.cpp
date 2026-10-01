#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int og=n;
  int sum=0;
  int digits=0;
  int temp=n;
  while(temp>0){
    digits++;
    temp/=10;
  }
 
  temp=n;
 while(temp>0){
  int ld=temp%10;
  sum=sum+pow(ld,digits);
  temp/=10;
 }

  if(og==sum)  cout<<"Armstrong";
  else  cout<<"Not Armstrong";
}