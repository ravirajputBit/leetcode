class Solution {
public:
    void preordr(int lp, int rp, int lvl, string r, int n, vector<string> &ans){
        if(lp==n && rp==n && lvl==0) ans.push_back(r);
        if(lp < n) preordr(lp+1, rp, lvl+1, r+"(", n, ans);
        if(rp<n  && lvl>0) preordr(lp, rp+1, lvl-1, r+")", n, ans);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        preordr(1, 0, 1, "(", n, ans);
        return ans;
    }
};