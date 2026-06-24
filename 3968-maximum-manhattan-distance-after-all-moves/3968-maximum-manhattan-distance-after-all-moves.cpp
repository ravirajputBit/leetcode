class Solution {
public:
    int maxDistance(string m) {
        int a = 0, b = 0, cnt = 0;

        for(int i=0; i<m.size(); i++){
            char ch = m[i];
            if(ch == 'L'){
                a += -1;
            }
            else if(ch == 'R') a += 1;
            else if(ch == 'D') b -= 1;
            else if(ch == 'U') b += 1;
            else cnt++;
        }
        return cnt + (abs(a)+abs(b));
    }
};