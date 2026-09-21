class Solution {
public:
    int cost(int i, int j, vector<int> &cuts, vector<vector<int>> &dp){
        if(j-i == 1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int mn = INT_MAX;
        for(int k=i+1; k<j; k++){
            int c = cost(i, k, cuts, dp)+cost(k, j, cuts, dp) + cuts[j]-cuts[i];
            mn = min(mn, c);
        }
        dp[i][j] = mn;
        return mn;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.insert(cuts.begin(), 0);
        cuts.insert(cuts.end(), n);
        sort(cuts.begin(), cuts.end());
        vector<vector<int>> dp(cuts.size()+1, vector<int>(cuts.size()+1, -1));

        return cost(0, cuts.size()-1, cuts, dp);
    }
};