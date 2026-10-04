class Solution {
public:
    bool checkValidString(string s) {
        int mn = 0;
        int mx = 0;
        for(char c  : s){
            if(c == '('){
                mn++;
                mx++;
            }
            else if(c == ')'){
                if(mn > 0) mn--;
                mx--;
            }
            else{
                if(mn > 0) mn--;
                mx++;
            }
            if(mx < 0) return false;
        }
        return mn == 0;
    }
};