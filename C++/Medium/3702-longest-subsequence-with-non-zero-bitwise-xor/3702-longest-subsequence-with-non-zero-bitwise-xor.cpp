class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ttlXor = 0;
        bool f = true;

        for(int i=0; i<nums.size(); i++){
            ttlXor ^= nums[i];
            if(nums[i] > 0){
                f = false;
            }
        }
        if(ttlXor > 0) return n;
        else return f ? 0 : n-1;
    }
};