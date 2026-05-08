#include<iostream>
using namespace std;
#include <climits>

int main(){
   int array[]={1,2,3,4,5};
   int n=5;
   int maxi=INT_MIN;
   for(int st=0;st<n;st++){
    int cursum=0;
    for(int end=st;end<n;end++){
        cursum+=array[end];
        maxi=max(cursum,maxi);
      
     
    }
   }
  cout<<maxi;
    return 0;
}