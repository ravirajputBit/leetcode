class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int cnt = 0;
        for(int i=1; i<s.length(); i++){
            if(cnt == -1){
                cnt++;
                continue;
            }
            else if(s[i] == '('){
                res += s[i];
                cnt++;
            }
            else if(s[i] == ')' && cnt != 0){
                res += s[i];
                cnt--;
            }
            else cnt--;
        }
        return res;
    }
};