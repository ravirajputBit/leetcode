class Solution {
public:
    string reversePrefix(string s, int k) {
        string str;

        for(int i=k-1; i>=0; i--){
            str.push_back(s[i]);
        }

        for(int i=k; i<s.size(); i++){
            str.push_back(s[i]);
        }
        return str;
    }
};