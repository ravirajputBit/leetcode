class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        for(int i=1; i<n; i++){
            int d = abs(nums[i] - nums[i-1]);
            if(d != 1 && d != n-1) return -1;
        }

        if(n == 1 || (nums[0] == 0 && nums[1] == 1)) return 0;
        return min(n-nums[0], nums[0]+2);
    }
};