#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 
  vector<int> arr(n);
  for(int i=0;i<arr.size();i++){ 
    cin>>arr[i];
 };
  int target;
  cout<<"enter the target";
  cin>>target;
  
   for(int i=0;i<n;i++){
    if(arr[i]==target){
        cout<<i;
    }
   }

}