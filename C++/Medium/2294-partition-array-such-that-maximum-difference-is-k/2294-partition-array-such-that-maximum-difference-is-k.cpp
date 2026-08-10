class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 1;
        int a = nums[0];
        for(int x : nums){
            if(x-a > k){
                a = x;
                cnt++;
            }
        }
        return cnt;
    }
};