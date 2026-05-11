#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxsumarray(vector<int> & nums){

    int maxi=INT_MIN;
    for(int st=0;st<nums.size();st++){
        int cs=0; 
        for(int end=st;end<nums.size();end++){
            cs+=nums[end];
            maxi=max(cs,maxi);
        }
    }
    return maxi;
}



int main(){
     vector<int> nums={1,2,3,4,5};
    cout<<maxsumarray(nums);

    return 0;
}