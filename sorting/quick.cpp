//quick sort 
//nlogn
//1
//tuif


class Solution {
public:
   int prior(vector<int>&arr,int low ,int high){
        int i=low;
        int j=high;
        int pevet=arr[low];


        while(i<j){
           while(arr[i]<=pevet && i<=high-1){
            i++;
           }
           while(arr[j]>pevet && j>=low+1){
            j--;
           }
           if(i<j) swap(arr[i],arr[j]);
        }

        swap(arr[low],arr[j]);
        return j;
   }


   void qs(vector<int>&arr ,int low ,int high){
      if(low<high){
        int pri=prior(arr,low,high);
        qs(arr,low,pri-1);          
        qs(arr,pri+1,high);          
      }    
   }


    vector<int> quickSort(vector<int>& arr) {
       qs(arr,0,arr.size()-1);
       return arr;
    }
};
