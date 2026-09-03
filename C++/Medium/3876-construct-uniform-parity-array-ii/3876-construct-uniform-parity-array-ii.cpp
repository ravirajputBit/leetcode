class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX;
        int cnt = 0;
        for(int x : nums1){
            mn = min(mn, x);
            if(x%2 == 1) cnt++;
        }
        if(mn%2 || cnt==0) return true;
        return false;
    }
};