//merge sort
//nlogn
//on
//tuf
class Solution {
    public:
    void merge(vector<int>&arr,int low,int mid,int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid&&right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
           temp.push_back(arr[left]);
                left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
                right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }

    void ms(vector<int>&arr,int low,int high){
        if(low==high) return;
        int mid=(low+high)/2;
        ms(arr,low,mid);
        ms(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

    vector<int> mergeSort(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
       return nums;
    }
};
