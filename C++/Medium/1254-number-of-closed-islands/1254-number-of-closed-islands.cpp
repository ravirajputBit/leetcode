class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int way[5] = {-1, 0, 1, 0, -1};
        int ans = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] != 0 || vis[i][j]) continue;

                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;
                bool flag = true;

                while(!q.empty()){
                    auto [r, c] = q.front();
                    q.pop();
                    if(r == 0 || r == m-1 || c == 0 || c == n-1) flag = false;

                    for(int d=0; d<4; d++){
                        int nr = r + way[d];
                        int nc = c + way[d+1];
                        if(nr >= 0 && nr < m && nc >= 0 && nc < n 
                            && grid[nr][nc] == 0 && !vis[nr][nc]){
                            vis[nr][nc] = true;
                            q.push({nr, nc});
                        }
                    }
                }
                if(flag) ans++;
            }
        }
        return ans;
    }
};