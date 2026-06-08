class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int n = nums.size();
        int ls = 0;
        int eql = 0;
        for(int x : nums){
            if(x < p) ls++;
            else if(x == p) eql++;
        }

        vector<int> ans(n);

        int ls1 = 0;
        int eql1 = ls;
        int grtr = ls+eql;

        for(int i=0; i<n; i++){
            if(nums[i] < p){
                ans[ls1++] = nums[i];
            }
            else if(nums[i] > p){
                ans[grtr++] = nums[i];
            }
            else{
                ans[eql1++] = nums[i];
            }
        }
        return ans;
    }
};