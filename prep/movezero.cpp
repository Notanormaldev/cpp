#include<bits/stdc++.h>
using namespace std;

void movezero(vector<int> &arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
           swap(arr[i],arr[j]);
           j++;
        }
    }
}

int main(){
    vector<int> arr={0,1,2,0,7};
   movezero(arr);
    for(int c:arr)  cout<<c;
    return 0;
}