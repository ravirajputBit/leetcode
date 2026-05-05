class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        int n = p.size();
        sort(p.begin(), p.end(), [](vector<int>& p1, vector<int>& p2){
            return p1[1] < p2[1];
        });
        int count = 1;
        int x = p[0][1];
        for(int i=1; i<n; i++){
            if(x < p[i][0]){
                count++;
                x = p[i][1];
            }
        }
        return count;
    }
};