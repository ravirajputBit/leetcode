class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<int> Indgr(n, 0);
        for(int i=0; i<n-1; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            Indgr[u]++;
            Indgr[v]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++){
            if(Indgr[i] == 1)
            q.push(i), Indgr[i]--;
        }

        vector<int> ans;
        while(!q.empty()){
            int m = q.size();
            ans.clear();
            for(int i=0; i<m; i++){
                int crr = q.front();
                q.pop();
                ans.push_back(crr);
                for(auto x : adj[crr]){
                    Indgr[x]--;
                    if(Indgr[x] == 1) q.push(x);
                }
            }
        }
        if(n == 1) return {0};
        return ans;
    }
};