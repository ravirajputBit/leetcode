class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<tuple<int, int, int>> q;
        q.push(make_tuple(src, 0, -1));

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        while(!q.empty()){
            auto [u, cost, stop] = q.front(); q.pop();

            for(int i=0; i<flights.size(); i++){
                if(flights[i][0] == u){
                    int v = flights[i][1];
                    int wt = flights[i][2];

                    if(dist[v] > cost+wt && stop+1 <= k){
                        dist[v] = cost+wt;
                        q.push(make_tuple(v, dist[v], stop+1));
                    }
                }
            }
        }
        return dist[dst]==INT_MAX ? -1 : dist[dst];
    }
};