#include<iostream>
using namespace std;
#include<vector>


int main(){
   vector<int> vec={1,2,3};
   cout<<vec[0];

   vector<int> vecs(5,0);
   for(int i=0;i<5;i++){
    cout<<vecs[i];
   }

    return 0;
}