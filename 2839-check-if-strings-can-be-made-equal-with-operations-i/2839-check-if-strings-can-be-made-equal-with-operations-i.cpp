class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0; i<2; i++){
            int j = i+2;
            if(s1[i]==s2[i] && s2[j]==s1[j]) continue;
            swap(s1[i], s1[j]);
        }
        if(s1 == s2) return true;
        else return false;
    }
};