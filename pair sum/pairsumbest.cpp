#include<iostream>
using namespace std;
#include<vector>

vector<int> pairsum(vector<int>&nums,int target){
    vector<int> ans;
    int i=0; int j=nums.size()-1;
    while(i<j){
     int  pairsum=nums[i]+nums[j];
       if(pairsum<target){
          i++;
       }else if(pairsum>target){
        j--;
       }
       else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
    }
}


int main(){
vector<int> nums={2,7,11,15};
int target=9;
vector<int> ans = pairsum(nums,target);
cout<<ans[0]<<" "<<ans[1];

    return 0;
}