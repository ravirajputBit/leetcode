class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m);
        grid[m-1] = string(n, '.');
        string r = '.' + string(n-1, '#');

        for(int i=0; i<m-1; i++){
            grid[i] = r;
        }
        return grid;
    }
};