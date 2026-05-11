#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int majorityeleopt( vector<int> & nums){
    //sort
    sort(nums.begin(),nums.end());
   
   int n=nums.size()/2;
   int freq=1; int ans=nums[0];

   for(int i=1;i<nums.size();i++){
    if(nums[i]==nums[i-1]){
        freq++;
    }else{
        freq=1;
        ans=nums[i];
    }

    if(freq>n){
        return ans;
    }
   }
   

}






int  main(){
 vector<int> nums={1,2,2,1,1};
cout<< majorityeleopt(nums);

    return 0;
}