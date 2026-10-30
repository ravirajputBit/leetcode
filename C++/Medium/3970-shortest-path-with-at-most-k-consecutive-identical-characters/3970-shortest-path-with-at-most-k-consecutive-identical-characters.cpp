class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);

        for(auto& edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
        }

        const long long INF = LLONG_MAX;
        vector<vector<long long>> dist(n, vector<long long>(k+1, INF));
        dist[0][1] = 0;
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        
        pq.push({0, 0, 1});
        while(!pq.empty()){

            auto [cost, u, cnt] = pq.top();
            pq.pop();
            if(cost > dist[u][cnt]) continue; 
            if(u == n-1){
                return static_cast<int> (cost);
            }

            for(auto& [v,w] : adj[u]){
                int newCnt;
                if(labels[u] == labels[v]) newCnt = cnt + 1;
                else newCnt = 1;
                if(newCnt > k) continue;

                long long newCost = cost + w;
                if(newCost < dist[v][newCnt]){
                    dist[v][newCnt] = newCost;
                    pq.push({newCost, v, newCnt});
                }
            } 
        }
        return -1;
    }
};