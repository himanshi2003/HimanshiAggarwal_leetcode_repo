

class Solution {
private:
    int firstoccur(vector<int>& nums, int s, int e, int target){
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
             
             
        if(nums[mid]==target){
            ans=mid;
            //yha ham esa isliye kar rhe h kuki hame  left occur nikal rhe hai 
            e=mid-1;
        }
        if(target>nums[mid]){
            s=mid+1;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
        s=mid+1;
        
    }
    int lastoccur(vector<int>& nums, int s, int e, int target){
         int ans=-1;
         int mid=s+(e-s)/2;
            
        while(s<=e){
            
            
        if(nums[mid]==target){
            ans=mid;
            //yha ham esa isliye kar rhe h kuki hame  right occur nikal rhe hai 
            s=mid+1;
        }
        if(target>nums[mid]){
            s=mid+1;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
        s=mid+1;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;
        int first = firstoccur(nums, s, e, target);
        int last = lastoccur(nums, s, e, target ) ;
        if(first < nums.size() && nums[last] == target){
            return {first, last};
        }
        return {-1, -1};
    }
};