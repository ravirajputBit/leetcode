class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            long long LCM = 1;
            for(int j=i; j<nums.size(); j++){
                if(LCM > k)
                    break;

                LCM = lcm(LCM, (long long)nums[j]);
                if(LCM == k)
                    count++;
            }
        }
        return count;
    }
};