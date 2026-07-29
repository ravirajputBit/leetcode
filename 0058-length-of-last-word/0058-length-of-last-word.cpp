class Solution {
public:
    int lengthOfLastWord(string s) {
        int ln = 0;
        bool flg = false;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] != ' '){
                flg = true;
                ln++;
            }
            else if(flg) break;
        }
        return ln;
    }
};