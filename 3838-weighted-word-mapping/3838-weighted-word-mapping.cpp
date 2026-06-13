class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(string s : words){
            int ans = 0;
            for(char c : s){
                int i = c-'a';
                ans += weights[i];
            }
            int j = ans%26;
            res += 'z'-j;
        }
        return res;
    }
};