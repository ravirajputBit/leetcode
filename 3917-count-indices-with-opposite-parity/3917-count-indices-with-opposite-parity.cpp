class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int e = 0, o = 0;
            if(nums[i]%2 == 0){
                for(int j=i+1; j<n; j++)
                if(nums[j]%2 != 0) o++;
                ans[i] = o;
            }else{
                for(int j=i+1; j<n; j++)
                if(nums[j]%2 == 0) e++;
                ans[i] = e;
            }
        }
        return ans;
    }
};