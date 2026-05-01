class Solution {
public:
    long long removeZeros(long long n) {
        string str = to_string(n);
        string ans;
        for(char s : str){
            if(s != '0')
            ans += s;
        }
        return stoll(ans);
    }
};