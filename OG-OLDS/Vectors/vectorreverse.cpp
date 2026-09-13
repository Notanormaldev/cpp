#include<iostream>
#include<vector>
using namespace std;


int reversevec(vector<int>& vec){
   int st = 0;
   int end = vec.size()-1;

   while(st<end){
      swap(vec[st],vec[end]);
      st++;
      end--;
   }
 

}




int main(){
  vector<int> vec={1,2,3,4,5};

  reversevec(vec);
    for(int val:vec){
    cout<<val;
  }

    return 0;
}