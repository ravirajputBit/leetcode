class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0;
        for(int x : nums){
            sum += x;
        }

        vector<int> ans(nums.size());
        int lSm = 0;
        for(int i=0; i<nums.size(); i++){
            int rSm = sum-nums[i];
            sum -= nums[i];
            ans[i] = abs(lSm-rSm);
            lSm += nums[i];
        }
        return ans;
    }
};