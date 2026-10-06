class Solution {
public:
    int lis(vector<int> &nums1){
        unordered_set<int> s(nums1.begin(), nums1.end());
        
        vector<int> nums2(s.begin(), s.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int lengthOfLIS(vector<int>& nums) {
        return lis(nums);
    }
};