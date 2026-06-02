class Solution {
public:
    int earliestFinishTime(vector<int>& lSTime, vector<int>& lD, vector<int>& wSTime, vector<int>& wD) {
        int ans = INT_MAX;
        for(int i=0; i<lSTime.size(); i++){
            for(int j=0; j<wSTime.size(); j++){
                
                int L = lSTime[i]+lD[i];
                int LtoW = max(L, wSTime[j]) + wD[j];
                ans = min(ans, LtoW);

                int W = wSTime[j]+wD[j];
                int WtoL = max(W, lSTime[i]) + lD[i];
                ans = min(ans, WtoL);
            }
        }
        return ans;
    }
};