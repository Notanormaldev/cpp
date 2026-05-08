#include<iostream>
using namespace std;
#include<vector>


int main(){
   
   int array[]={1,2,3,4,5};
   int n=5;
 for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
        for(int i=st;i<=end;i++){
            cout<<array[i];
        }
        cout<<' ';
    }
    cout<<endl;
 }
   

    return 0;
}