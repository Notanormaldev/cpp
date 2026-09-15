#include<bits/stdc++.h>


using namespace std;



int func(int n){
 if(n==0){  // base case n==1 for 1 or n==0||n==1 for 1
    return 0;
 }
 return n+func(n-1);  // * for factorial
}


int main(){
    int n;
    cin>>n;
   cout<<func(n);
    return 0;
}
//functional recursion