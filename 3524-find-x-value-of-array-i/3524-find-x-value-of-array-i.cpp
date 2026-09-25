class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> dp(k, 0), ans(k, 0);
        for(int n : nums){
            vector<long long> ndp(k, 0);
            int r = n%k;
            ndp[r]++;
            for(int j=0; j<k; j++){
                int nr = (r*j)%k;
                ndp[nr] += dp[j];
            }
            for(int j=0; j<k; j++){
                ans[j] += ndp[j];
            }
            dp = ndp;
        }
        return ans;
    }
};