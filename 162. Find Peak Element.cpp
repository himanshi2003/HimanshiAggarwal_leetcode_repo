class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int s=0;
        // int e=nums.size()-1;
        // while(s<e){
        //     int mid=s+(e-s)/2;
        //     if(nums[mid]<nums[mid+1]){
        //         s=mid+1;
        //     }
        //     else{
        //         e=mid;
        //     }
        // }
        // return s;

        // <========one more solution====>

        if(nums.size()==1){
            return 0;
        }
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if((mid==0 || nums[mid]>nums[mid-1]) && (mid==nums.size()-1
            || nums[mid]>nums[mid+1])){
                return mid;
            }
            if(nums[mid]>nums[mid+1]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return s;

        
    }
};