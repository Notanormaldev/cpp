#include<iostream>
#include<climits>
using namespace std;
#include<vector>
int kadane(vector<int> &vec){
    int maxi=INT_MIN;
    int cnum=0; 
    for(int i=0;i<vec.size();i++){
      cnum+=vec[i];
      maxi=max(cnum,maxi);
      if(cnum<0){
        cnum=0;
      }
    }
    return maxi;
}


int main(){
  vector<int> vec={3,-4,5,4,-1,7,-8};

  cout<<kadane(vec);
  return 0;



}