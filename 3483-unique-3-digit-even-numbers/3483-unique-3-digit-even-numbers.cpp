class Solution {
public:
    int totalNumbers(vector<int>& dgt) {
        set<int> st;
        int n = dgt.size();
        for(int i=0; i<n; i++){
            if(dgt[i] == 0) continue;
            for(int j=0; j<n; j++){
                if(j == i) continue;
                for(int k=0; k<n; k++){
                    if(k==i || k==j) continue;
                    if(dgt[k]%2) continue;
                    int x = dgt[i]*100+dgt[j]*10+dgt[k];
                    st.insert(x);
                }
            }
        }
        return st.size();
    }
};