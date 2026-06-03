class Solution {
public:
    int greedy(vector<int>& st1, vector<int>& d1, vector<int>& st2, vector<int>& d2){
        int ans = INT_MAX;
        for(int i=0; i<st1.size(); i++){
            ans = min(ans, st1[i]+d1[i]);
        }

        int ans2 = INT_MAX;
        for(int j=0; j<st2.size(); j++){
            ans2 = min(ans2, max(ans, st2[j])+d2[j]);
        }

        return ans2;
    }
    
    int earliestFinishTime(vector<int>& lST, vector<int>& lD, vector<int>& wST, vector<int>& wD) {
        int LtoW = greedy(lST, lD, wST, wD);
        int WtoL = greedy(wST, wD, lST, lD);
        return min(LtoW, WtoL);
    }
};