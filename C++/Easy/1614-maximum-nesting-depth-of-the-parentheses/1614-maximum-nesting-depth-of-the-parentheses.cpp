class Solution {
public:
    int maxDepth(string s) {
        int mx = 0, cnt = 0;
        for(char ch : s){
            if(ch == '('){
                cnt++;
                mx = max(mx, cnt);
            }
            else if(ch == ')') cnt--;
        }
        return mx;
    }
};