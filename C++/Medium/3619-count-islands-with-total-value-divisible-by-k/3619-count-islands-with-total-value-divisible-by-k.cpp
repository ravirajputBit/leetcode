class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int way[5] = {-1, 0, 1, 0, -1};

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int cnt = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0 || vis[i][j]) continue;

                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;
                long long sum = grid[i][j];
                while(!q.empty()){
                    auto [r, c] = q.front();
                    q.pop();
                    
                    for(int d=0; d<4; d++){
                        int nr = r + way[d];
                        int nc = c + way[d+1];
                        if(nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] > 0 && !vis[nr][nc]){
                            q.push({nr, nc});
                            vis[nr][nc] = true;
                            sum += grid[nr][nc];
                        }
                    }
                }
                if(sum%k == 0) cnt++;
            }
        }
        return cnt;
    }
};