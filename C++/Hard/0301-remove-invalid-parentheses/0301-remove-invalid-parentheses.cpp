class Solution {
public:
    bool isValid(string s){
        int b = 0;
        for(char c : s){
            if(c == '(') b++;
            else if(c == ')') b--;
            if(b < 0) return false;
        }
        return b == 0;
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        unordered_set<string> st;
        queue<string> q;
        q.push(s);
        st.insert(s);
        bool f = false;

        while(!q.empty()){
            string curr = q.front();
            q.pop();
            int sz = curr.size();
            if(isValid(curr)){
                ans.push_back(curr);
                f = true;
            }
            if(f) continue;

            while(sz--){
                for(int i=0; i<curr.size(); i++){
                    if(curr[i] != '(' && curr[i] != ')') continue;
                    string nxt = curr.substr(0, i)+curr.substr(i+1);

                    if(st.find(nxt) == st.end()){
                        st.insert(nxt);
                        q.push(nxt);
                    }
                }
                if(f) break;
            }
        }
        return ans;
    }
};