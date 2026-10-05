class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int fs=0;
        int fe=m-1;
        int ss=0;
        int se=n-1;
        vector<int> temp;
        while(fs<=fe && ss<=se){
            if(nums1[fs]<=nums2[ss]){
                temp.push_back(nums1[fs]);
                fs++;
            }else{
                 temp.push_back(nums2[ss]);
                ss++;
            }
        }
        while(fs<=fe){
           temp.push_back(nums1[fs]);
                fs++;
        }
        while(ss<=se){
         temp.push_back(nums2[ss]);
                ss++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
    }
};