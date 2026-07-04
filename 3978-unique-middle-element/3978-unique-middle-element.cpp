class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int k = n/2;
        int cnt = 0;
        for(int x : nums){
            if(x == nums[k]){
                cnt++;
            }
        }
        return cnt == 1 ? true : false;
    }
};