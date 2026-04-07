class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long poly = -1, sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum > nums[i]*2)
                poly = sum;
        }
        return poly;
    }
};