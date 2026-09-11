class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        queue<pair<int, int>> q;
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 0)
                vis[i][j] = true;
                if(grid[i][j] == 2){
                    vis[i][j] = true;
                    q.push({i, j});
                }
                if(grid[i][j] == 1)
                cnt++;
            }
        }
        if(cnt == 0) return 0;
        if(q.empty()) return -1;
        
        int ans = -1;
        while(!q.empty()){
            int s = q.size();
            for(int k=0; k<s; k++){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1){
                    cnt--;
                    vis[i+1][j] = true;
                    q.push({i+1, j});
                }
                if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1){
                    cnt--;
                    vis[i][j+1] = true;
                    q.push({i, j+1});
                }
                if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){
                    cnt--;
                    vis[i-1][j] = true;
                    q.push({i-1, j});
                }
                if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){
                    cnt--;
                    vis[i][j-1] = true;
                    q.push({i, j-1});
                }                
            }
            ans++;
        }
        if(cnt == 0) return ans;
        return -1;
    }
};