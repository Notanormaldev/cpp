#include<iostream>
#include<vector>
using namespace std;


int main(){
   vector<int> vec={1,2,3};

   cout<<"vector size"<<vec.size()<<endl;
   cout<<"vector front"<<vec.front()<<endl;
   cout<<"vector back"<<vec.back()<<endl;



   vec.push_back(22);
   vec.push_back(20);
   vec.pop_back();
   for(int val:vec){
    cout<<val;
   }
   cout<<vec.at(1);
    return 0;
}