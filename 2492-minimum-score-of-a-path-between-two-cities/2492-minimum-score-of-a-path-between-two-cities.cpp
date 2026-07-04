class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n+1);
        for(auto x : roads){
            int u = x[0];
            int v = x[1];
            int w = x[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<bool> v(n+1, false);
        queue<int> q;
        q.push(1);
        v[1] = true;
        int ans = INT_MAX;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto [ni, wt] : adj[node]){
                if(!v[ni]){
                    q.push(ni);
                    v[ni] = true;
                }
                ans = min(ans, wt);
            }
        }
        return ans;
    }
};