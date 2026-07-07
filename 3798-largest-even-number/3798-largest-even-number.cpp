class Solution {
public:
    string largestEven(string s) {
        for(int i=s.length()-1; i>=0; i--){
            if((int)s[i]%2 == 0)
            return s;
            else{
                s.pop_back();
            }
        }
        return s;
    }
};