class Solution {
public:
    void topo(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>> &gf){
        vis[src] = true;
        for(int i=0; i<gf.size(); i++){
            int u = gf[i][1];
            int v = gf[i][0];
            if(src == u){
                if(!vis[v]){
                    topo(v, vis, s, gf);
                }
            }
        }
        s.push(src);
    }
    bool isCycle(int src, vector<bool> &vis, vector<bool> &rec, vector<vector<int>> &gf){
        vis[src] = true;
        rec[src] = true;
        for(int i=0; i<gf.size(); i++){
            int u = gf[i][1];
            int v = gf[i][0];
            if(src == u){
                if(!vis[v]){
                    if(isCycle(v, vis, rec, gf))
                        return true;
                }
                else{
                    if(rec[v]){
                        return true;
                    }
                }
            }
        }
        rec[src] = false;
        return false;
    }

    vector<int> findOrder(int n, vector<vector<int>>& gf) {
        vector<bool> vis(n, false);
        vector<bool> rec(n, false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(isCycle(i, vis, rec, gf))
                 return {};
            }
        }

        for(int i=0; i<n; i++)
            vis[i] = false;
        vector<int> ans;
        stack<int> s;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                topo(i, vis, s, gf);
            }
        }

        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};