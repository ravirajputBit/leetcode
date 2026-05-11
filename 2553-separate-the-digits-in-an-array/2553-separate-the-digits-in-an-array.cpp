class Solution {
public:
    void Insert(int n, vector<int>& ans){
        while(n){
            ans.push_back(n%10);
            n /= 10;
        }
        return ;
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
            Insert(nums[i], ans);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};