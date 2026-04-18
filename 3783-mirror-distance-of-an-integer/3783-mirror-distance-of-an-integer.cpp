class Solution {
public:
    int rvrs(int n){
        int rev = 0;
        while(n){
            rev = rev*10 + n%10;
            n /= 10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n - rvrs(n));
    }
};