class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long cnt = 0;
        long long ttl = 0;
        for (char ch : s) {
            if (ch == c) {
                cnt++;
                ttl += cnt;
            }
        }
        return ttl;
    }
};