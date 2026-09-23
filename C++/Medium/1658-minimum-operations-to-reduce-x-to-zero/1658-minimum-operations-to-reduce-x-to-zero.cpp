class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        if(totalSum-x < 0) return -1;
        if(totalSum-x == 0) return n;

        int sum = 0, i = 0, ans = -1;
        for(int j=0; j<n; j++){
            sum += nums[j];
            while(i<j && sum > totalSum-x){
                sum -= nums[i++];
            }
            if(sum == totalSum-x)
            ans = max(ans, j-i+1);
        }
        return ans==-1 ? -1 : n-ans;
    }
};