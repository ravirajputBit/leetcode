class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = -1;
        for(int i=0; i<n-1; i++){
            int x = *min_element(nums.begin()+i, nums.end());
            if(mx < nums[i]) mx = nums[i];
            if(mx-x <= k) return i;
        }
        if(mx < nums[n-1]) mx = nums[n-1];
        if(mx-nums[n-1] <= k) return n-1;
        return -1;
    }
};