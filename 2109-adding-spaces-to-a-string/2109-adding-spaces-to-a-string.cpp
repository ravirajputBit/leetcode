class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        string st(m+n, ' ');

        int j = 0;
        for(int i=0; i<n; i++){
            if(j<m && i==spaces[j]){
                st[i+j] = ' ';
                j++;
            }
            st[i+j] = s[i];
        }
        return st;
    }
};