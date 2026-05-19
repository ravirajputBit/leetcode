class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        int st = 0;
        int end = n-1;

        for(int i=0; i<n; i++){
            if(nums[st]+nums[end] < target) st++;
            else if(nums[st]+nums[end] > target) end--;
            else break;
        }
        return {st+1, end+1};
    }
};