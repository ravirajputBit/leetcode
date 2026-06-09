class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int m = INT_MIN;
        int n = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            m = max(nums[i], m);
            n = min(nums[i], n);
        }

        return (long long) (m-n)*k;
    }
};