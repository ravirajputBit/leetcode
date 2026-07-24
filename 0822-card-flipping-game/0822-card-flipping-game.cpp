class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        int n = fronts.size();
        set<int> st;
        for(int i=0; i<n; i++){
            if(fronts[i] == backs[i])
            st.insert(fronts[i]);
        }

        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            if(!st.count(backs[i])){
                ans = min(ans, backs[i]);
            }
            if(!st.count(fronts[i])){
                ans = min(ans, fronts[i]);
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};