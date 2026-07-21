class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        int cnt = count(s.begin(), s.end(), '1');

        int i = 0, prev = INT_MIN;
        int bg = 0, cur = 0;
        while(i < n){
            int st = i;
            while(i < n && s[i] == s[st]){
                i++;
            }
            if(s[st] == '0'){
                cur = i-st;
                bg = max(bg, prev+cur);
                prev = cur;
            }
        }
        return cnt+bg;
    }
};