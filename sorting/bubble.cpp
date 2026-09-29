//bubble sort
//best o(n) // why because when sorted array then we add flag so flag once check all array and done
//wrost and avg o(n*n)
#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
};

void bubble_sort2(int arr[],int n){
  for(int i=n-1;i>=0;i--){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp; 
            didswap=1;         
         }
    }
    if(didswap==0){
        break;
    }
    cout<<"runs"<<endl;
  }
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort2(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}