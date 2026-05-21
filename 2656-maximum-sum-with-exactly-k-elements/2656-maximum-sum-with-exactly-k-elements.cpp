class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = nums[n-1];
        int score = 0;
        for (int i=0; i<k; i++){
            score += maxi;
            maxi++;
        }
        return score;
    }
};