class Solution {
public:
    int expand(string& s, int l, int r) {
        int cnt = 0;
        while(l >= 0 && r < s.length() && s[l] == s[r]){
            cnt++;
            l--;
            r++;
        }
        return cnt;
    }

    int countSubstrings(string s) {
        int cnt = 0;
        for(int i=0; i<s.length(); i++){
            cnt += expand(s, i, i);
            cnt += expand(s, i, i + 1);
        }
        return cnt;
    }
};