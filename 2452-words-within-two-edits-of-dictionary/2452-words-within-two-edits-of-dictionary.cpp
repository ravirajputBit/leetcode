class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
        vector<string> ans;
        for(int i=0; i<q.size(); i++){
            const string& s = q[i];
            for(const string& ds : d){
                int diff = 0;
                for(int j=0; j<s.size(); j++){
                    diff += s[j]!=ds[j];
                    if(diff > 2) break;
                }
                if(diff <= 2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};