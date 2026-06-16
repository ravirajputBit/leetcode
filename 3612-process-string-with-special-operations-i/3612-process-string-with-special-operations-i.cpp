class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char c : s){
            int n = res.size();
            if(c == '*' && n){
                res.pop_back();
            }
            else if(c == '#' && n){
                res += res;
            }
            else if(c == '%' && n){
                reverse(res.begin(), res.end());
            }
            else if(c >= 'a' && c <= 'z'){
                res += c;
            }
        }
        return res;
    }
};