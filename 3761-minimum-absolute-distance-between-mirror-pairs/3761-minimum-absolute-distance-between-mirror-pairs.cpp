class Solution {
public:
    int rvrs(int n){
        int rev = 0;
        while(n){
            rev = rev*10 + n%10;
            n /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        
        unordered_map<int, int> m;
        int idx = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(m.count(nums[i]))
                idx = min(idx, i-m[nums[i]]);
            m[rvrs(nums[i])] = i;
        }
        return (idx == INT_MAX) ? -1 : idx;
    }
};