class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n*n;
        vector<int> freq(m+1, 0);
        int rep = -1;
        int miss = -1;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                freq[grid[i][j]]++;

        for(int i=1; i<=m; i++){
            if(freq[i] == 2) rep = i;
            if(freq[i] == 0) miss = i;
        }
        return {rep, miss};
    }
};