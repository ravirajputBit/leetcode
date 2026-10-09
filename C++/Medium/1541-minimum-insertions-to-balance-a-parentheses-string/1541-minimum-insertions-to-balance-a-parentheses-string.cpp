class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(') st.push(s[i]);
            else{
                if(st.empty()){
                    if(i<s.length()-1 && s[i+1] == ')') i++;
                    else ans++;
                    ans++;
                }
                else{
                    if(i<s.length()-1 && s[i+1] == ')') i++;
                    else ans++;
                    st.pop();
                }
            }
        }
        return ans+st.size()*2;
    }
};