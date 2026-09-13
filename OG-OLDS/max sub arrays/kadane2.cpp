#include<iostream>
#include<climits>
#include<vector>
using namespace std;
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
   vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
   cout<<kadane(nums);

    return 0;
}