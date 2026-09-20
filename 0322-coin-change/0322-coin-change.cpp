class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        for(int coin : coins){
            for(int i=coin; i<amount+1; i++){
                dp[i] = min(dp[i], 1+dp[i-coin]);
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};