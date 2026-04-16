class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=INT_MIN;
        for(int i : nums){
            if(i > max)
                max = i;
        }

        int sum = 0;
        for(int i : nums)
            sum += abs(i-max);

        return sum;
    }
};