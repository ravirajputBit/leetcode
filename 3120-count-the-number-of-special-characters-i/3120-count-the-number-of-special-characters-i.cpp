class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> l(26, false);
        vector<bool> u(26, false);

        for(char c : word) {
            if(c >= 'a' && c <= 'z')
                l[c - 'a'] = true;

            else if(c >= 'A' && c <= 'Z')
                u[c - 'A'] = true;
        }

        int count = 0;
        for(int i=0; i<26; i++) {
            if(l[i] && u[i])
                count++;
        }
        return count;
    }
};