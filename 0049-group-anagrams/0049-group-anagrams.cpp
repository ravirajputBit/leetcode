class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string x : strs){
            string w = x;
            sort(w.begin(), w.end());
            m[w].push_back(x);
        }

        vector<vector<string>> ans;
        for(auto x : m){
            ans.push_back(x.second);
        }
        return ans;
    }
};