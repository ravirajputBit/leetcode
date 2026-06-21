class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int k = *max_element(costs.begin(), costs.end());

        vector<int> freq(k+1, 0);
        for(int x : costs){
            freq[x]++;
        }

        int ans = 0;
        for(int i=1; i<=k; i++){
            if(freq[i] == 0) continue;
            
            int cB = min(coins/i, freq[i]);
            coins -= i*cB;
            ans += cB;

            if(coins < i) break;
        }
        return ans;
    }
};