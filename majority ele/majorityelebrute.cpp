#include<iostream>
using namespace std;
#include<vector>

int majorityele( vector<int> & nums ){
    int n=nums.size()/2;
    for(int val:nums){
        int freq=0;
       for(int el:nums){
        if(el==val){
            freq++;
        }
       }
       if(freq>n){
        return val;
       }
    }
}



int main(){
    vector<int> nums={2,1,2,2,2,1,1};
    cout<<majorityele(nums);
    return 0;
}