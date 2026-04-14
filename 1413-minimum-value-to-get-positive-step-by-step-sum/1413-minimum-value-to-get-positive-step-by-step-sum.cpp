class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int mini = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum < mini)
                mini = sum;
        }
        return 1-mini;

    }
};