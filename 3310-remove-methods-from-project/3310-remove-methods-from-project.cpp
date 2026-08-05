class Solution {
public:
    void dfs(int k, unordered_map<int, vector<int>>& m, vector<int>& visited){
        visited[k] = 1;
        for(auto& x : m[k]){
            if(!visited[x])
            dfs(x, m, visited);
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        unordered_map<int, vector<int>> m;
        for(auto& x : invocations){
            int u = x[0];
            int v = x[1];
            m[u].push_back(v);
        }
        vector<int> visited(n, 0);
        dfs(k, m, visited);

        vector<int> ans;
        for(auto& x : invocations){
            int u = x[0];
            int v = x[1];
            if(!visited[u] && visited[v]){
                for(int i=0; i<n; i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }
        for(int i=0; i<n; i++){
            if(!visited[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};