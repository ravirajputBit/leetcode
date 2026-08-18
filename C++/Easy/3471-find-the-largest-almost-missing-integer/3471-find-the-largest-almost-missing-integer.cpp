class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == n){
            return *max_element(nums.begin(), nums.end());
        }

        unordered_map<int, int> m;
        for(int i : nums){
            m[i]++;
        }

        if(k == 1){
            int ans = -1;
            for(int x : nums){
                if(m[x]==1 && x>ans){
                    ans = x;
                }
            }
            return ans;
        }
        if(m[nums[0]]==1 && m[nums[n-1]]>1){
            return nums[0];
        }
        if(m[nums[n-1]]==1 && m[nums[0]]>1){
            return nums[n-1];
        }
        if(m[nums[0]]==1 && m[nums[n-1]]==1){
            return max(nums[0], nums[n-1]);
        }
        return -1;
    }
};