#include<bits/stdc++.h>
using namespace std;

void revarr(int arr[]){
   int i=0;
   int j=4;

   while(i<j){
    // int temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
    //  arr[i]=arr[i]+arr[j];
    //  arr[j]=arr[i]-arr[j];
    //  arr[i]=arr[i]-arr[j];

    arr[i]=arr[i]^arr[j];
    arr[j]=arr[i]^arr[j];
    arr[i]=arr[i]^arr[j];
    i++;
    j--;
   }
}


int main(){

    int arr[]={1,2,3,4,5};
    revarr(arr);
    for(int i:arr) cout<<" "<<i;
    return 0;
}