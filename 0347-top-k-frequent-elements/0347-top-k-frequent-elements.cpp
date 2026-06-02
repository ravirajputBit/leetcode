class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int x : nums){
            m[x]++;
        }

        priority_queue<pair<int, int>> p;
        for(auto x : m){
            p.push({x.second, x.first});
        }

        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i] = p.top().second;
            p.pop();
        }
        return ans;
    }
};