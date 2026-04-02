class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=2; i<n; i+=3){
            if(nums[i]==nums[i-1] && nums[i]==nums[i-2])
                continue;
            if(nums[i]==nums[i-1] && nums[i]!=nums[i-2])
                return nums[i-2];
        }
        return nums[n-1];
    }
};