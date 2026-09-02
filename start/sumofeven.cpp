#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
   cout<<sum;

    return 0;
}