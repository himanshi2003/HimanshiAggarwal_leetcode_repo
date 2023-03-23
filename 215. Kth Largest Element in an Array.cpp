class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nums.size();
        sort(nums.begin(), nums.end());

        return nums[nums.size()-k];
        
    }
};