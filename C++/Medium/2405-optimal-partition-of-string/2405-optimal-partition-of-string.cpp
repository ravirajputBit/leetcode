class Solution {
public:
    int partitionString(string s) {
        int p = 0;
        int l = 0;
        vector<int> str(26);
        for(int i=0; i<s.length(); i++){
            if(str[s[i]-'a'] >= l){
                p++;
                l = i+1;
            }
            str[s[i]-'a'] = i+1;
        }
        return p;
    }
};