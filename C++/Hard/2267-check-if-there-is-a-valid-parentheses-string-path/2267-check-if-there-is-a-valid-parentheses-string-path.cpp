class Solution {
public:
    bool dfs(int i, int j, int n, int m, int cnt, int mx, vector<vector<vector<bool>>> &vis, vector<vector<char>> &grid){
        if(grid[i][j] == ')') cnt -= 1;
        else cnt += 1;
        if(cnt < 0 || cnt > mx) return false;

        if(i+1 >= n && j+1 >= m){
            return cnt == 0;
        }

        if(vis[i][j][cnt]) return false;
        vis[i][j][cnt] = true;

        if(i+1 < n){
            if(dfs(i+1, j, n, m, cnt, mx, vis, grid)) return true;
        }
            
        if(j+1 < m){
            if(dfs(i, j+1, n, m, cnt, mx, vis, grid)) return true;
        }
        return false;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if((n+m-1)%2 != 0 || grid[0][0] == ')' || grid[n-1][m-1] == '(')
        return false;

        int mx = (n+m) / 2;
        vector<vector<vector<bool>>> vis(n, vector<vector<bool>>(m, vector<bool>(mx+1, false)));
        return dfs(0, 0, n, m, 0, mx, vis, grid);
    }
};