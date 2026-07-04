class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans = INT_MIN;
        int mx = INT_MIN;
        for(int i=k; i<nums.size(); i++){
            mx = max(mx, nums[i-k]);
            ans = max(ans, mx+nums[i]);
        }
        return ans;
    }
};