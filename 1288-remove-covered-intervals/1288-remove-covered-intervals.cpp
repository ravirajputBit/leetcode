class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            if(a[0] != b[0]) return a[0] < b[0];
            return a[1] > b[1];
        });

        int hy = intervals[0][1];
        int ans = 0;
        for(int i=1; i<intervals.size(); i++){
            if(hy >= intervals[i][1]) ans++;
            else hy = intervals[i][1];
        }
        return intervals.size()-ans;
    }
};