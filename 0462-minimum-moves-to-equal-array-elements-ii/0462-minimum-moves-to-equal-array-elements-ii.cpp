class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mdn = nums[nums.size() / 2];
        long long mv = 0;
        for(int x : nums){
            mv += abs(x - mdn);
        }
        return mv;
    }
};