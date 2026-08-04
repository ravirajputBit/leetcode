class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        int st = nums[0];
        int end = nums[n-1];

        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=st+1; i<end; i++){
            if(!s.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};  