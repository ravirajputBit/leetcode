class Solution {
public:
    const int mod = 1e9+7;
    int dep = 0;

    long long pow(long long a, long long b){
        long long ans = 1;
        while(b > 0){
            if(b & 1)
                ans = (ans*a) % mod;

            a = (a*a) % mod;
            b >>= 1;
        }
        return ans;
    }

    void dfs(vector<vector<int>>& adj, int n, int p, int d){
        dep = max(dep, d);
        for(int x : adj[n]){
            if(x != p){
                dfs(adj, x, n, d+1);
            }
        }
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        vector<vector<int>> adj(n+1);
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(adj, 1, 0, 0);
        return pow(2, dep-1);
    }
};