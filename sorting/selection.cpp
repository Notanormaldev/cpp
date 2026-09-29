//selection sort
//o(n*n) always for every case avg wrost best
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
   for(int i=0;i<n-1;i++){
            int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
   }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}
