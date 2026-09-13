#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int kadane(vector<int>&nums){
   int cs=0;int maxi=INT_MIN;
   for(int i=0;i<nums.size();i++){
    cs+=nums[i];
    maxi=max(cs,maxi);
    if(cs<0){
        cs=0;
    }
   }
  return maxi;

}

int main(){
    vector<int> nums={1,2,3,4,5};
    cout<<kadane(nums);
    return 0;
}