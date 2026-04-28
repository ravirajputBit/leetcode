class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        
        int prev = max(nums[0], nums[1]);
        int prev1 = nums[0], curr;

        for(int i=2; i<nums.size(); i++){
            curr = max(nums[i]+prev1, prev);
            prev1 = prev;
            prev = curr;
        }
        return curr;
    }
};