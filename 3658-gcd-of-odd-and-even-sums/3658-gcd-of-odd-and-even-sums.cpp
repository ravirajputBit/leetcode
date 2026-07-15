class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sO = 0, sE = 0;
        for(int i=1; i<=n; i++){
            sE += i*2;
            sO += i*2-1;
        }
        return gcd(sE, sO);
    }
};