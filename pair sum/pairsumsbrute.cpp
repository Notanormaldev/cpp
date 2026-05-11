#include<iostream>
using namespace std;
#include<vector>


vector<int> pairsums(vector<int>&nums ,int target){
  vector<int> ans;
  for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
        }
    }
  }
  return ans;



}



int main(){
 vector<int> nums={2,7,11,13};
 int target=9;
vector<int> ans= pairsums(nums,target);
 for(int val:ans){
    cout<<val;
 }

    return 0;
}