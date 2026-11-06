class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = logs.size();
        sort(logs.begin(), logs.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });

        int q = queries.size();
        vector<pair<int, int>> tIdx(q);
        for(int i=0; i<q; i++)
        tIdx[i] = {queries[i], i};
        sort(tIdx.begin(), tIdx.end());

        unordered_map<int, int> mp;
        vector<int> res(q);
        int i = 0, j = 0;
        for(auto [t, idx] : tIdx){
            int st = t-x;
            int end = t;
            while(j<m && logs[j][1]<=end){
                mp[logs[j][0]]++;
                j++;
            }

            while(i<m && logs[i][1]<st){
                mp[logs[i][0]]--;
                if(mp[logs[i][0]] == 0)
                mp.erase(logs[i][0]);
                i++;
            }
            res[idx] = n-mp.size();
        }
        return res;
    }
};