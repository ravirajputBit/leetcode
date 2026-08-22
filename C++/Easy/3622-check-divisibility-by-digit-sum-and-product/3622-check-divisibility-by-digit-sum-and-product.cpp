class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, pro = 1;
        int a = n;
        while(a > 0){
            sum += a%10;
            pro *= a%10;
            a /= 10;
        }
        if(n%(sum + pro) == 0) return true;
        return false;
    }
};