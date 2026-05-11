#include<iostream>
using namespace std;
#include<vector>


int signum(vector<int> & nums){
    int cs=0;
     for(int val:nums){
        cs^=val;
     }
     return cs;

}

int main(){
    vector<int> nums={1,2,2,1,4,6,5,4,6};
    cout<<signum(nums);

    return 0;
}