class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=1; i<=mx/k; i++){
            if(!s.count(k*i))
            return k*i;
        }
        return (mx/k+1)*k;
    }
};