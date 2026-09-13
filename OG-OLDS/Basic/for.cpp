#include<iostream>
using namespace std;

int main(){
    int n=5;
    int i=0;
    int sum=0;
   while(i<=n){
   if(i%2 != 0){
    sum+=i;
    //  cout<<i;
}
i++;
}
cout<<sum;

    return 0;
}