#include<iostream>
using namespace std;


int linear(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
       if(arr[i]==target){
        return i;
       }
    }
  return -1;
}


int main(){
   int arr[]={4,3,6,7,8,10};
   int sz=6;
   int target=8;

   cout<<linear(arr,sz,target);

    return 0;
}