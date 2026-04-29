class Solution {
public:
    bool validDigit(int n, int x) {
        if(n < 10) return false;

        int a = n;
        while(a > 9)
            a /=10;
        if(a == x)
        return false;

        while(n){
            if(n%10 == x)
            return true;
            n /= 10;
        }
        return false;
    }
};