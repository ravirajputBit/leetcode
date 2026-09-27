class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string res = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == ')'){
                while(!st.empty()){
                    char x = st.top();
                    if(x == '('){
                        st.pop();
                        break;
                    }
                    res += x;
                    st.pop();
                }
                for(char c : res){
                    st.push(c);
                }
                res = "";
            }
            else
                st.push(s[i]);
        }
        while(!st.empty()){
            if(st.top() == '(') continue;
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};