class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long poly = -1, sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < sum)
                poly = sum + nums[i];
            sum += nums[i];
        }
        return poly;
    }
};