class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rs(m, 0);
        vector<int> cs(n, 0);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    rs[i]++;
                    cs[j]++;
                }
            }
        }

        int ans = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1 && (rs[i]>1 || cs[j]>1)) ans++;
            }
        }
        return ans;
    }
};