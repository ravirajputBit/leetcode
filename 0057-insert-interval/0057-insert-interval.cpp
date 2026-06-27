class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& nIntrvl) {
        int n = intervals.size();
        vector<vector<int>> ans;

        int i = 0;
        while(i < n && intervals[i][1] < nIntrvl[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        while(i < n && intervals[i][0] <= nIntrvl[1]){
            nIntrvl[0] = min(intervals[i][0], nIntrvl[0]);
            nIntrvl[1] = max(intervals[i][1], nIntrvl[1]);
            i++;
        }

        ans.push_back(nIntrvl);
        while(i < n){
            ans.push_back(intervals[i++]);
        }

        return ans;
    }
};