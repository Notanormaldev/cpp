#include<iostream>
using namespace std;
#include<vector>


int main(){
   vector<int> vec={1,2,3};
   vector<char> vecs={'a','b','c','d','e'};

   for(char i:vecs){
    cout<<i;
   }

    return 0;
}