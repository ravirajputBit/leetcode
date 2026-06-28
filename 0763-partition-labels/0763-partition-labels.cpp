class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();

        vector<int> v(26, 0);
        for(int i=0; i<n; i++){
            v[s[i]-'a'] = i;
        }

        vector<int> ans;
        int st = 0, end = 0;
        for(int i=0; i<n; i++){
            end = max(end, v[s[i]-'a']);
            if(i == end){
                ans.push_back(end-st+1);
                st = i+1;
            }
        }
        return ans;
    }
};