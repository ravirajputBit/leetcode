class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int x : nums){
            sum += x;
        }

        long long lSum = 0;
        int idx;
        int cmp = INT_MAX;
        for(int i=0; i<n; i++){
            sum -= nums[i];
            lSum += nums[i];
            int a = lSum / (i+1);
            int b = (i == n-1)? 0 : sum /(n-i-1);
            int val = abs(a - b);
            if(val < cmp){
                idx = i;
                cmp = val;
            }
        }
        return idx;
    }
};