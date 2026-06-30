class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int ch[3] = {0};
        int l = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            ch[s[i]-'a']++;
            while(ch[0] && ch[1] && ch[2]){
                ans += n-i;
                ch[s[l]-'a']--;
                l++;
            }
        }
        return ans;
    }
};