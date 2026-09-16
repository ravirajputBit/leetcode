class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int s = 0;
            int a = i;
            while(a){
                s += a%2;
                a /= 2;
            }
            ans.push_back(s);
        }
        return ans;
    }
};