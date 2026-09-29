//find the highest/lowest frequency element

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    } 

    int highest=INT_MIN;
    int hel=0;
    int lowest=INT_MAX;
    int lel=0;
    for(auto it:mp){
        if(it.second>highest){
            highest=it.second;
            hel=it.first;
        } 
        if(it.second<lowest){
            lowest=it.second;
            lel=it.first;
        }
    }

     cout<<hel<<"  "<<highest<<endl;
     cout<<lel<<"  "<<lowest<<endl;

    // int q;
    // cin>>q;
    // while(q--){
    //   int num;
    //   cin>>num;
    //   //fetch
    //   cout<<mp[num]<<endl;
    // }

}