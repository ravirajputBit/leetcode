class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> a, b;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(img1[i][j] == 1)
                a.push_back({i, j});
                if(img2[i][j] == 1)
                b.push_back({i, j});
            }
        }

        unordered_map<int, int> frq;
        int cnt = 0;
        for(auto x : a){
            for(auto y : b){
                int si = y.first - x.first;
                int sj = y.second - x.second;
                int k = si*100+sj;
                cnt = max(cnt, ++frq[k]);
            }
        }
        return cnt;
    }
};