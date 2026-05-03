class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
 
        while(k > 0){
            int mini = nums[0];
            int idx = 0;
            for(int i=0; i<nums.size(); i++){
                if(mini > nums[i]){
                    mini = nums[i];
                    idx = i;
                }
            }
            nums[idx] = mini*m;
            k--;
        }
        return nums;
    }
};