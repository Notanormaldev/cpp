#include<iostream>
using namespace std;
#include<vector>


int linearsearch(vector<int> vec,int tar){

   for(int i=0;i<vec.size();i++){
   if(vec[i]==tar){
    return i;
   }

   }

}

int main(){

   vector<int> vec={1,2,4,5,8,11,22};
   int tar=8;
 cout<<  linearsearch(vec,tar);
    return 0;
}