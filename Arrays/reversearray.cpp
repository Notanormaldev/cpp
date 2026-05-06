#include<iostream>
using namespace std;

void reversearray(int arr[],int sz){
    int st=0;
    int end=sz-1;


    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

}



int main(){
  int arr[]={2,3,4,5,6,7};
  int sz=6;

 reversearray(arr,sz);


 for(int i=0;i<sz;i++){
    cout<<arr[i];
 }
  return 0;

}