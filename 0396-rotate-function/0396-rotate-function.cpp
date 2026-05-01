class Solution {
public:
    
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, f = 0;
        for(int i=0; i<n; i++){
            sum += (long) i*nums[i];
            f += nums[i];
        }

        int ans = sum;
        for(int j=n-1; j>=0; j--){
            sum += (f - n*nums[j]);
            ans = max(ans, sum);
        }
        return ans;
    }
};