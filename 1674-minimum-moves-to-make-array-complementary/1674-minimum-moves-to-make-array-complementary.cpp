class Solution {
public:
    int minMoves(vector<int>& nums, int l) {
        int n = nums.size();
        vector<int> V(2*l+2, 0);

        for(int i=0; i<n/2; i++){
            int a = min(nums[i], nums[n - 1 - i]);
            int b = max(nums[i], nums[n - 1 - i]);
            int s = nums[i] + nums[n - 1 - i];

            V[a+1] -= 1;
            V[b+1+l] += 1;
            V[s] -= 1;
            V[s+1] += 1;
        }

        int m = n;
        int curr = n;
        for(int i=2; i<=2*l; i++){
            curr += V[i];
            m = min(m, curr);
        }
        return m;
    }
};