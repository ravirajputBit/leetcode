class Solution {
public:
    int brokenCalc(int sVal, int t) {
        int ans = 0;
        while(sVal < t){
            ans++;
            if(t % 2 == 1)
                t++;
            else
                t /= 2;
        }
        ans += sVal - t;
        return ans;
    }
};