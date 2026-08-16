class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> frq;
        int i = 0;
        int j = 0;
        int ln = 0;
        while(j < s.length()){
            frq[s[j]]++;
            while(frq[s[j]] > 2){
                frq[s[i]]--;
                i++;
            }
            ln = max(ln, j-i+1);
            j++;
        }
        return ln;
    }
};