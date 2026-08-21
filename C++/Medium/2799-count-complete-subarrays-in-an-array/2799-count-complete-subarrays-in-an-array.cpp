class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> dstEle(nums.begin(), nums.end());
        int m = dstEle.size();
        int n = nums.size();
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            unordered_set<int> st;
            for(int j=i; j<n; j++){
                st.insert(nums[j]);
                if(st.size() == m){
                    cnt += (n-j);
                    break;
                }
            }
        }
        return cnt;
    }
};