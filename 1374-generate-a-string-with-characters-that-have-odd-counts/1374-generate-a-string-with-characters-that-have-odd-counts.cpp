class Solution {
public:
    string generateTheString(int n) {
        string s{};
        for(int i=0; i<n; i++)
            s += "a";
        
        if(n%2 == 1)
            return s;

        s[s.size()-1] = 'b';
        return s;

    }
};