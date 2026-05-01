class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int a = INT_MIN;
        int ans = -1;
        for(int i=0; i<n; i++){
            a = max(a, nums[i]);
            int b = INT_MAX;
            for(int j=i; j<n; j++){
                b = min(b, nums[j]);
            }
            if(a-b <= k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};