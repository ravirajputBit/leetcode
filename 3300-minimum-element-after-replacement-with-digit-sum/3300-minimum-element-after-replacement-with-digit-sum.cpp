class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int& x : nums){
            int sum  = 0;
            while(x > 0){
                sum += x%10;
                x /= 10;
            }
            x = sum;
        }
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};