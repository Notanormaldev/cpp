#include<iostream>
using namespace std;

#include <climits>


int main(){
   int array[] ={3,11,66,-20,44,-15};
   int size =6;
   int smallest = INT_MAX;
 for(int i=0;i<size;i++){
    if(array[i]<smallest){
        smallest=array[i];
    }
 }
 cout<<smallest;
    return 0;
}