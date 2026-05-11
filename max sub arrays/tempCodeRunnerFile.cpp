#include<iostream>
#include<vector>
using namespace std;
#include<climits>
int maxsumarray(vector<int> & nums){

    int maxi=INT_MIN;
    for(int st=0;st<nums.size();st++){
        int cs=0; 
        for(int end=st;st<nums.size();end++){
            cs+=nums[end];
            maxi=max(cs,maxi);
        }
    }
    cout<<maxi;
}



int main(){
     vector<int> nums={1,2,3,4,5};
    maxsumarray(nums);

    return 0;
}