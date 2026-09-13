#include<iostream>
using namespace std;
#include<vector>



 vector<int> twosum(vector<int>& vec,int target){
    for(int i=0;i<vec.size();i++){
        int crnum=vec[i];
        int need = target - crnum;
        for(int j=i+1;j<vec.size();j++){
            if(need==vec[j]){
               return {i,j};
            }
        }
    }
 

}

int main(){
    vector<int> vec ={2,7,11,15};
    int target=9;
vector<int> ans =twosum(vec,target);

    for(int val:ans){
        cout<<val;
    }
    return 0;
}