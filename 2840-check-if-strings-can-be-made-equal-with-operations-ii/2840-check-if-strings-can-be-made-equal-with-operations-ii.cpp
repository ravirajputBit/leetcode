class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> freq(52, 0);

        for(int i=0; i<s1.size(); i++){
            int typ = (i & 1) * 26;
            freq[s1[i] - 'a' + typ]++;
            freq[s2[i] - 'a' + typ]--;
        }

        for(int i = 0; i < 52; i++)
            if(freq[i] != 0) return false;

        return true;
    }
};