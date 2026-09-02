class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n+1);
        for(auto x : times){
            int u = x[0];
            int v = x[1];
            int w = x[2];
            adj[u].push_back(make_pair(v, w));
        }

        vector<int> dist(n+1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push(make_pair(0, k));
        dist[k] = 0;

        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            for(auto e : adj[u]){
                if(dist[e.first] > dist[u]+e.second){
                    dist[e.first] = dist[u]+e.second;
                    pq.push(make_pair(dist[e.first], e.first));
                }
            }
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(dist[i] == INT_MAX)
            return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }
};