class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = 0;
        for(int x : nums){
            m[x]++;
            n = max(n, m[x]);
        }

        vector<vector<int>> v(n);
        for(auto &a : m){
            int num = a.first;
            int f = a.second;
            for(int i=0; i<f; i++){
                v[i].push_back(num);
            }
        }
        return v;
    }
};