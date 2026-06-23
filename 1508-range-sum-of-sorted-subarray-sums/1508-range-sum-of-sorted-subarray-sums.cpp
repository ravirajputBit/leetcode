class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int l, int r) {
        vector<int> v;
        for (int i=0; i<n; ++i) {
            int pre = 0;
            for (int j=i; j<n; ++j) {
                pre += nums[j];
                v.push_back(pre);
            }
        }
        
        sort(v.begin(), v.end());
        int res = 0;
        int MOD = 1e9+7;
        for (int i=l-1; i<r; i++) {
            res = (res + v[i]) % MOD;
        }
        return res;
    }
};