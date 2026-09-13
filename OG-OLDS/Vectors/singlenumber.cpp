#include<iostream>
#include<vector>
using namespace std;

int singlenum(vector<int> vec){
    int ans=0;
    for(int val:vec){
        ans^=val;
    }
    return ans;

}

int main(){
   vector<int> vec={4,2,1,2,1};
   cout<<singlenum(vec);

    return 0;
}