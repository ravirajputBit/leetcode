class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";

        int i = a.length()-1;
        int j = b.length()-1;
        int cry = 0;
        while(i>=0 || j>=0 || cry){
            if(i >= 0){
                cry += a[i--] -'0';
            }
            if(j >= 0){
                cry += b[j--]-'0';
            }
            ans += cry % 2 + '0';
            cry /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};