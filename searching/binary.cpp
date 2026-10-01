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
  int low=0;
  int high=arr.size()-1;
  while(low<=high){
    int mid = low +(high-low)/2;
    if(arr[mid]==target){
        cout<<"find it"<<mid;
        return 0;
    }else if(arr[mid]>target){
        high=mid-1;
    }else{
     low=mid+1;
    }
  }
  cout<<"not found";

}