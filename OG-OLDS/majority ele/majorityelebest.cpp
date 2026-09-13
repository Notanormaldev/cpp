#include<iostream>
#include<vector>
using namespace std;

int majorityelebest(vector<int>&nums){
  int ans=0; int freq=0;
  int n=nums.size();
  for(int i=0;i<n;i++){
    if(freq==0){
        ans=nums[i];
    }
    if(ans==nums[i]){
        freq++;
    }else{
        freq--;
    }
    
}
  int ct=0;
  for(int val:nums){
    if(val==ans){
        ct++;
    }
  }
  if(ct>n/2){
    return ans;
  }else{
    return -1;
  }
}


int main(){
    vector<int> nums={1,2,3,4,1,1,1};
    cout<<majorityelebest(nums);
    return 0;
}