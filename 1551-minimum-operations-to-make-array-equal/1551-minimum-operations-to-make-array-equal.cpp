class Solution {
public:
    int minOperations(int n) {
        vector<long long> nums(n);
        long long sum = 0;
        for(int i=0; i<n; i++){
            nums[i] = (2*i)+1;
            sum += nums[i];
        }
        int tar = sum/n, ans = 0;
        for(int i=0; i<n; i++)
            ans += abs(tar - nums[i]);

        return ans/2;
    }
};