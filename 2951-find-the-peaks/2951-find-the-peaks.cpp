class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size();
        vector<int> ans;
        for(int i=1; i<n-1; i++){
            int a = mountain[i];
            if(a > mountain[i-1] && a > mountain[i+1])
                ans.push_back(i);
        }
        return ans;
    }
};