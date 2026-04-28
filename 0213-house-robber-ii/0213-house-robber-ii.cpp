class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        vector<int> arr1(n-1);
        vector<int> arr2(n-1);

        for(int i=0; i<n-1; i++)
        arr1.push_back(nums[i]);

        for(int j=1; j<n; j++)
        arr2.push_back(nums[j]);
        
        int prev = max(arr1[0], arr1[1]);
        int prev1 = arr1[0], curr;
        for(int i=2; i<arr1.size(); i++){
            curr = max(arr1[i]+prev1, prev);
            prev1 = prev;
            prev = curr;
        }

        int prev2 = max(arr2[0], arr2[1]);
        int prev3 = arr2[1], curr1;
        for(int i=2; i<arr2.size(); i++){
            curr1 = max(arr2[i]+prev3, prev2);
            prev3 = prev2;
            prev2 = curr1;
        }
        return max(curr, curr1);
    }
};