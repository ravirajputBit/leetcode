class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        long long ans = 0;
        long long wt = 0;
        for(int i=0; i<c.size(); i++){
            wt = max(wt, (long long)c[i][0]);
            wt += c[i][1];
            ans += wt-c[i][0];
        }
        return (double)ans/c.size();
    }
};