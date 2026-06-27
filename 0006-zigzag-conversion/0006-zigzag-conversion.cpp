class Solution {
public:
    string convert(string s, int r) {
        int n = s.length();

        if(r > 1){
            string str = "";
            int a = 0;
            while(a < r){
                for(int i=a; i<n; i+=(r-1)*2){
                    str += s[i];
                    if (a>0 && a<r-1 && i+2*(r-1)-2*a<n) {
                        str += s[i + 2*(r-1)-2*a];
                    }
                }
                a++;
            }
            return str;
        }
        return s;
    }
};