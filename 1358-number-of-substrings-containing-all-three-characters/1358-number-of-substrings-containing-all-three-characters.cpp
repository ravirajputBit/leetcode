class Solution {
public:
    bool check(const string& ss){
        if(ss.find('a') != string::npos && ss.find('b') != string::npos
            && ss.find('c') != string::npos) return true;
        return false;
    }

    int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        string ss = "";
        ss += s[0];
        ss += s[1];
        for(int i=2; i<n; i++){
            ss += s[i];
            if(check(ss)){
                while(ss.length()>=3 && check(ss)){
                    ans += n-i;
                    ss.erase(0, 1);
                }
            }
        }
        return ans;
    }
};