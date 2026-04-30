class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum1 = nums[0];
        int i = 1;
        while(nums[i] > nums[i-1]){
            sum1 += nums[i++];
        }

        long long sum2 = nums[i-1];
        int j = i;
        while(j < nums.size()){
            sum2 += nums[j++];
        }

        if(sum1 > sum2) return 0;
        else if(sum1 < sum2) return 1;
        return -1;
    }
};