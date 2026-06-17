class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        long long l = 0;
        for(auto c : s){
            if(c >= 'a' && c <= 'z'){
                l++;
            }
            else if(c == '*'){
                if(l > 0) l--;
            }
            else if(c == '#') l *= 2;
        }
        if(k >= l) return '.';

        for(int i=n-1; i>=0; i--){
            if(s[i] >= 'a' && s[i] <= 'z'){
                if(k == l-1) return s[i];
                l--;
            }
            else if(s[i] == '#'){
                l /= 2;
                k %= l;
            }
            else if(s[i] == '%'){
                k = l-k-1;
            }
            else{
                long long oL = l+1;
                if(k == oL-1) return '.';
                l = oL;
            }
        }
        return '.';
    }
};