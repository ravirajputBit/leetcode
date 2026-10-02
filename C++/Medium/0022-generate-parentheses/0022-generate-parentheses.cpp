class Solution {
public:
    void preordr(int lp, int rp, string r, int n, vector<string> &ans){
        if(lp==n && rp==n){
            ans.push_back(r);
            return ;
        }
            
        if(lp < n) preordr(lp+1, rp, r+"(", n, ans);
        if(rp < lp) preordr(lp, rp+1, r+")", n, ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        preordr(0, 0, "", n, ans);
        return ans;
    }
};