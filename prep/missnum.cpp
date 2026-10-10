#include<bits/stdc++.h>
using namespace std;

int missnum(vector<int> & arr){
   int n=arr.size();
   int sum = n * (n+1)/2;

   for(int i=0;i<n;i++){
       sum-=arr[i];
   }
   return sum;
}


int main(){
     vector<int> arr={3,0,1};
     cout<<missnum(arr);
    return 0;
}