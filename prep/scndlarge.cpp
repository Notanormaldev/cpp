//scnd largest in array
#include <bits/stdc++.h>
using namespace std;


int secondlarge(vector<int>&arr){
    int fl=INT_MIN;
    int sl=INT_MIN;
    bool notsca=false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==INT_MIN) return INT_MIN;
        if(arr[i]>fl){
                if(fl!=INT_MIN){
                    sl=fl;
                    notsca=true;
                }


            fl=arr[i];
        }else if(arr[i]<fl && arr[i]>sl){
            sl=arr[i];
            notsca=true;
        }
    }
      
    
 

    if(!notsca){
        return -1;
    }
    return sl;

}

int main(){

//    vector<int> arr={11,22,33,55,33};
   vector<int> arr={INT_MIN,INT_MAX};
   cout<<secondlarge(arr);
    return  0;
}