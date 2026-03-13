class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 1;
        int prev = nums[nums.size()-1];

        for (int i = nums.size() - 2; i >= 0; i--){
            if (nums[i] != prev){
                count++;
                prev = nums[i];
            }
            if (count == 3) return nums[i];
        }
        return nums[nums.size()-1];
    }
};