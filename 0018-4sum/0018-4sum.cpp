class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums .size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int h=0; h<n-3; h++){
            if(h > 0 && nums[h] == nums[h-1]) continue;
            long long new_trgt = (long long)target - (long long)nums[h];
            for(int i=h+1; i<n-2; i++){
                if(i > h+1 && nums[i] == nums[i-1]) continue;

                int j = i+1, k = n-1;
                while(j < k){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k];
                    if(sum < new_trgt)
                        j++;
                    else if(sum > new_trgt)
                        k--;
                    else{
                        ans.push_back({nums[h], nums[i], nums[j], nums[k]});
                        j++, k--;

                        while(j < k && nums[j] == nums[j-1]) j++;
                    }  
                }
            }
        }
        return ans;
    }
};